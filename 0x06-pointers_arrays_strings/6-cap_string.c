#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int capi = 0;

	while (str[capi])
	{
		while (!(str[capi] >= 'a' && str[capi] <= 'z'))
			capi++;

		if (str[capi - 1] == ' ' ||
		    str[capi - 1] == '\t' ||
		    str[capi - 1] == '\n' ||
		    str[capi - 1] == ',' ||
		    str[capi - 1] == ';' ||
		    str[capi - 1] == '.' ||
		    str[capi - 1] == '!' ||
		    str[capi - 1] == '?' ||
		    str[capi - 1] == '"' ||
		    str[capi - 1] == '(' ||
		    str[capi - 1] == ')' ||
		    str[capi - 1] == '{' ||
		    str[capi - 1] == '}' ||
		    capi == 0)
			str[capi] -= 32;

		capi++;
	}

	return (str);
}
