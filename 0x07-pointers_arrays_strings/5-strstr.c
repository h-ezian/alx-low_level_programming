#include "main.h"
/**
* _strstr - function finds the first occurrence of the substring
*needle in the string haystack.
*Description: 'function finds the first occurrence of the substring
* needle in the string haystack'
*@haystack: source string
*@needle: substring to search in the source string
*Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
int j;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
j = 0;
if (haystack[j] == needle[j])
{
while (haystack[j] == needle[j])
{
if (needle[j + 1] == '\0')
{
return (haystack);
}
j++;
}
}
haystack++;
}
return ('\0');
}

