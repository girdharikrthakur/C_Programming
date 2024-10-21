#include <stdio.h>

void birthday(char name[], int age)
{
 printf("\n Happy Birthday Dear %s", name);
 printf("\n Now you are %d years old", age);
}
int main()
{
 char name[] = "Hound";
 int age = 25;

 birthday(name, age);

 return 0;
}