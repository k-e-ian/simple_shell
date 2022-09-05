#include <stdio.h>

/**
 * main - print the environments
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
        unsigned int i;	
	(void)ac;
	(void)av;
	
	i = 0;

	while (env[i] != NULL)
	{
		printf("env[%d]:%s\n", i, env[i]);
		i++;
	}
	return (0);
}
