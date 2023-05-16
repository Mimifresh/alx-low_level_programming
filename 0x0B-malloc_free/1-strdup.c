#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate to new memory space location
* @str: character pointer
* Return: mmm 0
*/
char *_strdup(char *str)
{
	char *mmm;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	mmm = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[j]; j++)
	{
	mmm[j] =  str[j];
	return (mmm);
}
