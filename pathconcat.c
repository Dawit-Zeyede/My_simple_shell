#include "shell.h"
/**
 * pathconc - concaticate PATH with command.
 * @path: PATH.
 * @cmd: specific path.
 * Return: full path to executable path.
 */
char *pathconc(char *path, char *cmd)
{
	int pathlen;
	int i;

	pathlen = 0;
	while (path[pathlen] != '\0')
		pathlen += 1;
	for (i = 0; cmd[i] != '\0'; i++)
		path[pathlen + i] = cmd[i];
	path[pathlen + i] = '\0';
	return (path);
}
