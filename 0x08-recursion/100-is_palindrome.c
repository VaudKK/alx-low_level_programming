#include <string.h>

/**
 * palindrome_helper - helper method
 * @s: string
 * @b: start index
 * @e: end index
 *
 * Return: 1 or 0
 */
int palindrome_helper(char *s, int b, int e)
{
	int len = strlen(s);

	if (s[b] != s[e])
		return (0);

	if (len % 2 != 0)
	{
		if (b == e)
			return (1);
	}
	else
	{
		if (b > e)
			return (1);
	}

	return (palindrome_helper(s, b + 1, e - 1));
}

/**
 * is_palindrome - check if number is palindorme
 * @s: string to be checked
 * Return: 1 if true 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}
