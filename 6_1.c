#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	int pid;
	pid = fork();
	
	if(pid == -1)
	printf("child not created\n");
	else if(pid == 0)
	printf("child is executed");
	else if(pid > 0)
	printf("parent is executed");
	printf("Hello world!\n");
	return 0;
}

