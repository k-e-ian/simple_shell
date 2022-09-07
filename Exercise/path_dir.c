#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that prints each dir in path, one dir per line
 * Return: 0
 */
int main(void)
{
	char *path = getenv("PATH");
	char *dir = strtok(path, ":");

	while (dir)
	{
                printf("dir:%s\n", dir);		
		dir = strtok(NULL, ":");
	}
	return (0);
}
