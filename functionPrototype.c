#include <stdio.h>

void hello(char name[], int age);

int main()
{

 // Fucntion Prototype

 /*
 Fuction declaration , w/o body, befor main()
 ensures that call to a fuction are made with the correct arguments;
 */

 char name[] = "Hound";
 int age = 10;
 hello(name, age);

 return 0;
}

void hello(char name[], int age)
{
 printf("Hello, my name is %s and I am %d years old.\n");
}