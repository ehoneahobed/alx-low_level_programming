/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b){
    unsigned int converted_value = 0;
    int i = 0;

    if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

        converted_value = 2 * converted_value + (b[i] - '0');
	}

    return (converted_value);

}