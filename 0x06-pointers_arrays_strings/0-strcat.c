/*
 * File: 0-strcat.c
 * Abdrohman Ebrahim Hanur
 */
#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x=0;dest[x] != '\0'; x++)
		;
	for(y=o;src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
