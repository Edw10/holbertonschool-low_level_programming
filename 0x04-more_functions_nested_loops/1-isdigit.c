/**
 * _isdigit - determine if a character is a number
 * @c: character to test
 * Return: 1 if c is number, 0 if dont
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	return (0);
}
