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
float d;
printf("Size of a char:%lu byte(s)\n", sizeof(a));
printf("Size of an int:%lu byte(s)\n", sizeof(b));
printf("Size of a long int:%lu byte(s)\n", sizeof(d));
printf("Size of a long long byte:%lu byte(s)\n", sizeof(e))
printf("Size of a float:%lu byte(s)\n", sizeof(d));
return (0);
}
