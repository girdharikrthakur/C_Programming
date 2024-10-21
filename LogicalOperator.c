// Logical Operator

#include <stdio.h>
#include <stdbool.h>

int main()
{

 float temp = 35;

 // &&(AND)

 /*
  if (temp >= 0 && temp <= 30)
  {
   printf("The weather is Good!");
  }
  else
  {
   printf("The weather is Bad!");
   }

   */

 //|| (OR)

 /*
  if (temp <= 0 || temp >= 30)
  {
   printf("The weather is Bad!");
  }
  else
  {
   printf("The weather is good!");
  } */

 // !(NOT) operator

 bool sunny = true;

 if (!sunny)
 {
  printf("\nIt is not sunny today!");
 }
 else
 {

  printf("\n It is Sunny Outside");
 }

 return 0;
}