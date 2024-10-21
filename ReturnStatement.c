#include <stdio.h>

double sqr(double x)
{
 double result = x * x;
 return result;
}

// main Fuction

int main()
{

 double x = sqr(3.14);
 printf("The square of 3.14 is %.2f\n", x);

 return 0;
}