#include <stdio.h>

int main()
{

 char operator;
 double num1;
 double num2;
 double result;
 printf("Enter operator (+, -, *, /): ");
 scanf("%c", &operator);
 printf("Enter first number: ");
 scanf("%lf", &num1);
 printf("Enter second number: ");
 scanf("%lf", &num2);

 switch (operator)
 {
 case '+':
  result = num1 + num2;

  break;
 case '-':
  result = num1 - num2;

  break;
 case '*':
  result = num1 * num2;

  break;
 case '/':
  if (num2 != 0)
   result = num1 / num2;
  else
   printf("Error! Division by zero is not allowed.");

  break;
 default:
  printf("Error! Operator is not correct.");
  break;
 }
 printf("Result = %.2lf", result);

 return 0;
}