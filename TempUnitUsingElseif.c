#include <stdio.h>

int main()
{
 char t;

 printf("enter temp unit is s in 'C' or 'F'\n");

 scanf("%c", &t);

 t = topper(t);

 if (t == 'C')
 {
  printf("The  temperature is in 'C'\n");
 }
 else if (t == 'F')
 {
  printf("The temperature is in 'F'\n");
 }
 else
 {
  printf("this is inavlid Entry");
 }

 return 0;
}