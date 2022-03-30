#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{	
	int n, i, child_count;
	printf("Enter the no. of fork() calls u want\t");
	pid_t pid[n];
	for(i = n;i>0;i--)
	pid[i] = fork();
	printf("Hello\n");
	if(pid[i]==0){
	child_count++;
	}
	printf("The no. of child processes are %d\n",child_count);
}

