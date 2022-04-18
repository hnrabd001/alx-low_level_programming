/* 
 * File: 9-strcpy.c
 * Author Abdrohman Ebrahim
 */
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including t'\0')
 * @dest: the destination string
 * @src: the source string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
