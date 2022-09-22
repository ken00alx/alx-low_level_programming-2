#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strcmp -concatenate two string
 * @s1: destination string
 * @s2: source string
 * Return: returns 0 if equal -ve if not
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2, i, flag = 0;

	l1 = strlen(s1);
	l2 = strlen(s2);
	for (i = 0; i <= l1 || i <= l2; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		flag = *(s1 + i) - *(s2 + i);
	}
	return (flag);
}
