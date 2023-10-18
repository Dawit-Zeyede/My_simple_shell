#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct plink{
	char *path;
	struct plink *ptr;
};
typedef struct plink plink;
extern char **envp;
int main(int ac, char **argv)
{
	plink node1;
	plink *node;
	char *PATH = "PATH";
	char *value;
	char *paths;
	char *delimiter = ":";

	node = &node1;
	value = getenv(PATH);
	paths = strtok(value, delimiter);
	node->path = paths;
	printf("%s\n", node->path);
	while(paths != NULL)
	{
		paths = strtok(NULL, delimiter);
		if (paths == NULL)
			node->ptr = NULL;
		else
		{
			plink new;
			node->ptr = &new;
			node = node->ptr;
			node->path = paths;
			printf("%s\n", node->path);
		}
	}
	return (0);
}
