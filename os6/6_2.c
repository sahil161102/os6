#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	
	if(pid == -1)
	printf("child not created\n");
	else if(pid == 0)
	printf("child is executed\n");
	else if(pid > 0)
	printf("parent is executed\n");
	printf("Hello!\n");
}

