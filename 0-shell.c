#include "shell.h"
/**
 * main - Entry point for a shell.
 * @ac: Numeber of arguments for a shell.
 * @argv: arguments of the shell.
 * @env: enviroment variables of the shell.
 * Return: end of the program.
 */
int main()
{
	int i;
	int tokens;
	char prompt[] = "$ ";
	char *full_command = NULL;
	size_t size = 0;

	while (1)
	{
		tokens = 1;
		write(STDOUT_FILENO, prompt, 2);
		getline(&full_command, &size, stdin);
		for (i = 0; full_command[i] != '\n'; i++)
			if (full_command[i] == ' ' && full_command[i + 1] != '\n')
				tokens += 1;
		full_command[i] = '\0';
		arguments(full_command, tokens);
	}
	return (0);
}
