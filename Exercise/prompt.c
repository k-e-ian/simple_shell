#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
	size_t len = 0;
	int byte_read;
	char *buffer = (char *)malloc(sizeof(char) * len);

	while (1)
	{
		printf("$ ");
		byte_read = getline(&buffer, &len, stdin);
		printf("%s", buffer);
		if (byte_read == -1)
			return (-1);
	}
	return (0);
}
