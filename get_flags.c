#include "main.h"

/**
 * get_flags - Function to calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: parameter
 * Return: the active Flags
 */
int get_flags(const char *format, int *i)
{
	/*define the possible flag characters and their corresponding values*/
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	/*initialize variables */
	int j, curr_i = *i + 1;/* start at nect char after '%'*/
	int flags = 0;

	for (; format[curr_i] != '\0'; curr_i++)
	{
		/* Check if current character is a flag character */
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
		{
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j]; /* set corresponding flag value*/
				break;
			}
		}
		if (FLAGS_CH[j] == 0)
			break;/*if not a flag character, break out  of loop*/
	}
	/*update the inde to the last flag charecter*/
	*i = curr_i - 1;

	return (flags);
}
