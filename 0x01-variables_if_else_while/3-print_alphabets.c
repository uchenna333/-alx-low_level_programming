#include <stdio.h>
/**
*main - A program that prints the lettesof the alphabet in small and capital
*Return: 0 (success)
*/
int main(void)
{
int sl;
int cl;
for (sl = 'a'; sl <= 'z'; sl++)
putchar(sl);
for (cl = 'A'; cl <= 'Z'; cl++)
putchar(cl);
putchar('\n');
return (0);
}
