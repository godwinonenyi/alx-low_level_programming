#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
int n;
int h;
srand(time(0));
n = rand() - RAND_MAX / 2;
h = n % 10;
printf("Last digit of %d is %d", n, h);
if (h > 5)
{
printf("and is greater than 5");
}
if (h == 0)
{
printf("and is 0");
}
if (h < 6 && h != 0)
printf("and is less than 6 and not 0");
}
print("\n");
return (0);
}
