#include <stdio.h>

/**
 *main - Print sizes
 *
 *Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

fprintf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
fprintf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
fprintf("sizef ;\n", (unsigned long)sizeof(l int));ned long)sizeof(c));
fprintf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
fprintf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
