#include <cstdio>
#include <thread>
#include <iostream>
#include <vector>

void startme(int arg){

	std::cout << "Hello from thread" << arg << std::endl;
}




int main (int argc, char *argv[]){
	
	std::vector<std::thread> threads;
	for(int i=0; i<8; ++i){
		std::thread my_thread{startme,i};
		threads.push_back(std::move(my_thread));
	}
	for (auto& t:threads){
		t.join();
	}

	return 0;
}
