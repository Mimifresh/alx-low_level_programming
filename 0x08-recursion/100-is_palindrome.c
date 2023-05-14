#include "main.h"

int main_pal(char *s, int i, int len);
int main_strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (main_pal(s, 0, main_strlen_recursion(s)));
}

/**
 * main_strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int main_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + main_strlen_recursion(s + 1));
}

/**
 * main_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int main_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (main_pal(s, i + 1, len - 1));
}
