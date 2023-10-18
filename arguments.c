#include "shell.h"
void arguments(char *full_command, int tokens)
{
	int i;
	char **argv;
	char *each;
	char *separator;

	separator = " ";
	argv = malloc(sizeof(each) * tokens);
	each = strtok(full_command, separator);
	i = 0;
	while (each)
	{
		argv[i] = each;
		each = strtok(NULL, separator);
		i++;
	}
	i = 0;
	command_interpreter(argv);
	free(argv);
}
