#include "main.h"

/**
 * char *leet - function
 * @str: char
 * Return: string
 */

char *leet(char *str)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == str1[j])
				str[i] = str2[j];
		}
		i++;
	}
	return (str);
}
