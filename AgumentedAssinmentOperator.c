#include <stdio.h>

int main()
{
 int x = 10;
 x = x + 1;
 printf("\n%d", x); // 11
 x += 1;
 printf("\n%d", x); // 12

 int y = 10;
 y = y - 3;
 printf("\n%d", y); // 7
 y -= 3;
 printf("\n%d", y); // 4

 return 0;
}