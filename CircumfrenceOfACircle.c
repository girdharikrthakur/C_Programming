#include <stdio.h>

int main()
{
 const double PI = 3.141;
 double r;
 double circumfrence;

 printf("\n Enter the radius of circle\n");
 scanf("%lf", &r);
 circumfrence = 2 * PI * r;
 printf("\n Circumference of circle is %lf", circumfrence);
}