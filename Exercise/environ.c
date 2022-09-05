#include <stdio.h>

/**
 * main - environ to print out "environment"
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	extern char **environ;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("environ[%d]:%s\n", i, environ[i]);
		i++;
	}
	return (0);
}
