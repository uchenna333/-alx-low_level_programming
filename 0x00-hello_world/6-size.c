#include <stdio.h>
/**
 * main - this program will print out the various sizes of data types
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long d;
long long e;
float g;
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long byte:%lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
