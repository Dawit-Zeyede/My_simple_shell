#include "shell.h"
/**
 * command_interpreter - interprets command.
 * @argv: command to be interpreted.
 */
void command_interpreter(char **argv)
{
	plink *value;
	int j;
	int i;
	pid_t child;
	char *value;
	int absolute = 0;

	for (i = 0; argv[0][i] != '\0'; i++)
		if (argv[0][i] == '/')
			absolute = 1;
	if (absolute)
	{
		child = fork();
		if (child == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error: ");
				exit (0);
			}
		}
	}
	else
	{
		/** GET THE PATH **/
		value = getlink("PATH");
		for (j = 0; value->ptr != NULL; j++)
		{
			printf("%s\n", value->path);
			pathconc(value->path,
			value = value->ptr;
		}
}
