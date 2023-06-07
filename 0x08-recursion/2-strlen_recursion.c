#include "main.h"

/**
 * _strlen_recursion - function print words by recursion
 * @s: pointer to word
 * Return: counter of length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 +  _strlen_recursion(s + 1));
}
