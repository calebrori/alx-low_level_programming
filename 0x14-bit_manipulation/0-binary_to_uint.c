/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 * 
 */

unsigned int convert_binary_to_unsigned_int(const char *binary_string)
{
    unsigned int result = 0;
    int index = 0;

    if (binary_string == NULL)
        return 0;

    while (binary_string[index] != '\0')
    {
        if (binary_string[index] != '0' && binary_string[index] != '1')
            return 0;

        result <<= 1;

        if (binary_string[index] == '1')
            result += 1;

        index++;
    }

    return result;
}
