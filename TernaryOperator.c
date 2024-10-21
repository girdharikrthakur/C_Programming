#include <stdio.h>

int findMax(int x, int y)
{

 if (x > y)
 {
  return x;
 }
 else
 {
  return y;
 }
}

int findMin(int x, int y)
{

 return (x < y) ? x : y; //Ternary Operator
}

int main()
{
 int max = findMax(3, 4);
 printf("The max is %d\n", max);
 int min = findMin(3, 4);
 printf("The min is %d\n", min);
 return 0;
}