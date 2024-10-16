#include <stdio.h>
#include <math.h>

int main()
{

 double A, B, C;
 printf("Enter side A: ");
 scanf("%lf", &A);
 printf("Enter Sode B: ");
 scanf("%lf", &B);
 C = sqrt(A * B + B * B);
 printf("The length of the hypotenuse is: %.2lf", C);

 return 0;
}