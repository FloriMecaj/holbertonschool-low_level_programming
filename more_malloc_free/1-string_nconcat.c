#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - sasas
 *@s2: sedc
 *@n:awdcasc
 *Return: dcdc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *index;
	unsigned int i;
	unsigned int total_len;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n < s2_len)
		s2_len = n;

	total_len = s1_len + s2_len;

	index = malloc(total_len + 1);

	if (index == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		index[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		index[s1_len + i] = s2[i];
	}
	index[total_len] = '\0';

	return (index);
}
