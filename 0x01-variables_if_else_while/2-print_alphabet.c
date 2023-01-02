#include <stdio.h>
/**
 *main - A program that writes the letters of the alphabet is small letters
 *Return: 0 (Success)
 */
int main(void)
{
int lt;
for (lt = 'a'; lt <= 'z'; lt++)
putchar(lt);
putchar('\n');
return (0);
}
