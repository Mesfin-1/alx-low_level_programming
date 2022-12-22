#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @p: The string will be modified
 * Return: char var
 */
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
