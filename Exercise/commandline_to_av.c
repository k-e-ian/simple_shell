#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry
 * Return: zero;
 */
int main(void)
{
	char *token;
	size_t len = 0;
        char *buffer = (char *)malloc(sizeof(char) * len);

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("string: %s", buffer);

		token = strtok(buffer, " ");
		while (token)
		{
			printf("buffer string token: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}
