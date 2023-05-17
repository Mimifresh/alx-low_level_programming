#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int i, ca;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = ca = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[ca] != '\0')
	{
		ca++;
	}
	cont = malloc(sizeof(char) * (i + ca + 1));
	if (cont == NULL)
	{
		return (NULL);
	}
	i = ca = 0;
	while (s1[i] != '\0')
	{
		cont[i] = s1[i];
		i++;
	}
	while (s2[ca] != '\0')
	{
		cont[i] = s2[ca];
			i++, ca++;
	}
		cont[i] = '\0';
		return (cont);
}
