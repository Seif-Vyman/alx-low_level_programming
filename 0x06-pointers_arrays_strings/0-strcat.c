#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcat - print a  char by char of string
* @dest: pointer of string
* @src: pointer of string
* Return: return stract of dest and src
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
