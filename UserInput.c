/*

#include <stdio.h>
#include <string.h>

int main()
{
 int age;
 char name[25];
 printf("Enter you Age\n");
 scanf("%d", &age);
 printf("you are %d years old\n", age);

 printf("what is your name\n");
 fgets(name, 25, stdin);
 printf("your name is %s\n", name);

 return 0;
}

*/

#include <stdio.h>
#include <string.h>

int main()
{
 int age;
 char name[25];

 printf("Enter your Age\n");
 scanf("%d", &age); // Read the age

 printf("You are %d years old\n", age);

 getchar(); // Consume the leftover newline character after scanf

 printf("What is your name?\n");
 fgets(name, 25, stdin);          // Read the name including spaces
 name[strcspn(name, "\n,n")] = 0; // Remove the newline character from
 printf("Hello %s how are you", name);

 return 0;
}
