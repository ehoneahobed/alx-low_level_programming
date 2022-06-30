#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * if_number - function to check the string for number
 * @s: string being passed
 * Return: 1 for number 0 for not
 */
int if_number(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{

if (s[i] < '0' || s[i] > '9')
return (0);
}

return (1);
}
/**
 * string_length - calculating string length
 * @s: string to check
 * Return: count
 *
 */
unsigned int string_length(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
i++;

return (i);
}

/**
 * print_string - function to print string
 * @s: string to print
 * Return: none
 */
void print_string(char *s)
{
while (*s == '\0')
s++;

if (*s == '\0')
_putchar('0');

while (*s == '0')
s++;

while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}

/**
 * _calloc - function for memory
 * @nmemb: the number
 * @size: the size
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

s = malloc(nmemb * size);

if (s == 0)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
s[i] = 0;

return (s);
}

/**
 * main - function to multiply
 * @argc: number of arguments passed
 * @argv: argument variables
 * Return: Always zero
 */
int main(int argc, char **argv)
{
char *n1, *n2, *multi_res;
unsigned int l = 0, l1 = 0, l2 = 0, a, b, t = 0, c = 0, ten = 0;
if (argc < 3)
{
print_string("Error");
exit(98);
}
n1 = argv[1];
n2 = argv[2];
if (!(if_number(n1) && if_number(n2)))
{
print_string("Error");
exit(98);
}
l = string_length(n1) + string_length(n2);
multi_res = _calloc(l + 1, sizeof(char *));
if (multi_res == 0)
{
print_string("Error");
exit(98);
}
for (a = 0; a < l1; a++, ten++)
{

for (c = 0, b = 0; b < l2; b++)
{
t = (n1[l1 - a - 1] - '0') * (n2[l2 - b - 1] - '0') + c;

if (multi_res[l - b - ten - 1] > 0)
t = t + multi_res[l - b - ten - 1] - '0';
multi_res[l - b - ten - 1] = t % 10 + '0';
c = t / 10;
}

multi_res[l - b - ten - 1] += c + '0';
}

print_string(multi_res);
free(multi_res);
return (0);
}
