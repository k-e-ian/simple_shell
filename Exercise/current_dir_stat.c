#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - stat for PWD
 * Return: 0
 */
int main(int ac, char **av)
{
	unsigned int i = 1;
	struct stat st;
	char *path = getenv("PWD");

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
	}
	av[i] = path;
	while (ac >= 2)
	{
		printf("%s:", av[i]);
		if (stat(av[i], &st) == 0)
			printf(" FOUND\n");
		else
			printf(" NOT FOUND\n");
		ac--;
	}
	return (0);
}
