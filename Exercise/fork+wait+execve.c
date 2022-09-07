#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork, wait, execve exercise
 * Return: 0
 */
int main(void)
{
	pid_t padre;
	pid_t hijo = 1;
	int i = 0;
	int status;
	char *argv[] = {"bin/ls",
	       		"-l", 
			"/usr/", 
			NULL};
	char *const envp[] = {"bin/printenv", "HOME", NULL};
	
	padre = getpid();
	while (i <= 4 && (hijo != 0))
	{
		hijo = fork(); /* 5 different chole process*/
		if (hijo == -1)
		{
			perror("Error");
			return (1);
		}
		wait(&status);
		i++;
	}
	if (hijo == 0)
	{
		printf("................\n");
		printf("CHILD ID: %u\nPARENT ID: %u\n", getpid(), getppid());
		printf("................\n");
	}
	else
		printf("%u is the father(ID) and the child(ID) is: %u\n",padre, hijo);
	if (execve(argv[0], argv, envp) == -1)
		perror("Error");
	return (0);
}
