#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * if the number is positive print "the number is positive"
 * if the number is zero print "the number is zero"
 * if the number is negative print "the number is negative"
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
