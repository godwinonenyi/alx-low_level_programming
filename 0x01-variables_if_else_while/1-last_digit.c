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
if (h > 5)
printf("Last digit of %d is %d and is greater than 5", n, h);
else if (h == 0)
printf("Last digit of %d is %d and is 0", n, h);
else if (h < 6 && h != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, h);
printf("\n");
return (0);
}
