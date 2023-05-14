#include "main.h"

int main_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: imput number
* Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt_recursion(n, i + 1));
}
