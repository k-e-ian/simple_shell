#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0;
	(void)argc;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
