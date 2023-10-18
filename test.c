#include <stdio.h>
/**
 * _strcat - concatinate two strings
 * @dest: address of the first string
 * @src: address of the second string
 * * Return: end of the program
 */
int main(void)
{
	char *first = "Hello";
	char *second = " World";
	int first_len;
	int i;

	first_len = 0;
	while (first[first_len] != '\0')
	{
		first_len += 1;
	}
	for (i = 0; second[i] != '\0'; i++)
	{
		first[first_len + i] = second[i];
	}
	first[first_len + i] = '\0';
	return (0);
}
