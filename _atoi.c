#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 **
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
		return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	     {
		if (s[i] == '-')
											        sign *= -1;
		
		if (s[i] >= '0' && s[i] <= '9')
				
		{
								
			flag = 1;
											
			result *= 10;														
			result += (s[i] - '0');																
		}				
		else if (flag == 1)
								
			flag = 2;
					
	     }
		
	if (sign == -1)
					
		output = -result;
			
	else
						
		output = result;

				
	return (output);
}
