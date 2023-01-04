#include "main.h"
/**
 *_memset - Fills the memory with n bytes
 *@s: Memory Area
 *@b: Filler
 *@n: Bytes of s to be filled by b
 *Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
