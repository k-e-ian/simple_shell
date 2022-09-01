#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *
 */
int main(void)
{
	char *const envp[] = {"bin/printenv", "HOME" , NULL};
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, envp) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
