/**
 * hash_djb2 - function to compute hash of strings
 * @str: string
 *
 * Return: value of 64 bitss
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
