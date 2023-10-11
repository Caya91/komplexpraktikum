#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

struct thread_arg{
int number;
}

void *print1 (void *arg){
	struct thread_arg* targ =arg;

	print(format: "Hello from %i\n", targ->number);

	return Null;
}



int main(){

	pthread_t thereads[8];
	struct thread_arg thread_args[8];





	for (i=0, i < 8, ++i){
		pthread_t *t;
		
		thread_args[i].number = i;
		pthread_create(&threads[i], Null, startme, &thread_args[i]);
		printf("start thread %d\n", i);
		
	}

	for (int i=0, i < 8, ++i)
	{
	pthread_join(threads[i], Null);
	printf("Thread joined\n");

	}


	
	return 0;
}
