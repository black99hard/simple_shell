#include "shell.h"

/**
* Isinteractive - returns true if shell is interactive mode
* @info: struct address
*
* Return: 1 if interactive mode, 0 otherwise
*/
int Isinteractive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
* IsDelim - checks if character is a delimeter
* @c: the char to check
* @delim: the delimeter string
* Return: 1 if true, 0 if false
*/
int IsDelim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}
/**
* _isalphabet - checks for alphabetic character
* @c: The character to input
* Return: 1 if c is alphabetic, 0 otherwise
*/
int _isalphabet(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
/**
* _atoiFunc - converts a string to an integer
* @s: the  Return: 0 if no numbers in string, converted number otherwise
* Return: output
*/
int _atoiFunc(char *s)
{
int i, sign = 1, flagg = 0, outputs;
unsigned int result = 0;
for (i = 0; s[i] != '\0' && flagg != 2; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
flagg = 1;
result *= 10;
result += (s[i] - '0');
}
else if (flagg == 1)
flagg = 2;
}
if (sign == -1)
outputs = -result;
else
outputs = result;
return (outputs);
}
