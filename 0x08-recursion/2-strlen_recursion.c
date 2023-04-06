#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen_recursion - function fills the first n bytes of the memory area
* @s: pointer of char
* _putchar - function that print chars
* Return: return lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
