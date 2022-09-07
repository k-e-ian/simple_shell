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
	size_t len, byte_count, token_count = 0, s = 0, path_counter = 0,cmd_counter = 0;
        char *buffer = NULL, *path, *dir = NULL, *path_dir[20];
/*	struct stat st;*/
	char *command[20];

	printf("#my_shell$ ");
	byte_count = getline(&buffer, &len, stdin);
	printf("string: %s", buffer);
	printf("char_count: %ld\n", byte_count);
	token = strtok(buffer, " ");
	command[cmd_counter] = token;
	while (token)
	{
		printf("token[%ld]: %s\n", token_count, token);
		token = strtok(NULL, " ");
		token_count++;
	}
	path = getenv("PATH");
	dir = strtok(path, ":");
	path_dir[path_counter] = dir;
	path_counter++;
	while(dir)
	{
/*		printf("dir[%ld]: %s\n", s, dir);*/
		s++;
		dir = strtok(NULL, ":");
		path_dir[path_counter] = dir;
		path_counter++;
	}
	for (path_counter = 0; path_dir[path_counter]; path_counter++)
	{
		printf("path_dir[%ld]: %s\n", path_counter, path_dir[path_counter]);
	}

	printf("command[0]: %s\n", command[cmd_counter]);

	free(buffer);
	free(dir);
	return (0);
}
