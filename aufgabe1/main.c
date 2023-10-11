#include <stdio.h>

int steps;

int main(int argc, char *argv[])
{
if(argc == 2)
{
	//steps = *argv[1];
	printf("%d\n",argc);
	printf("%s\n",argv[0]);
	printf("%s\n",argv[1]);
}
else
{
	printf("wrong number of arguments\n");
}
}
