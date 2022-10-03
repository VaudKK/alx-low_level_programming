/**
 * _memcpy - copies n bytes from memory
 * @dest: the string to be filled
 * @src: bytes to be used to fill
 * @n: the n bytes to fill
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
