#include <stdio.h>

int main()
{
 int x;           // declaration
 x = 10;          // initialization
 printf("%d", x); // access

 int y = 20;                                                                  // declaration + Initialization
 int age = 21;                                                                // integer
 float gpa = 6.9;                                                             // floating point number
 char grade = 'C';                                                            // single character
 char name[] = "Hound";                                                       // array of character
 printf("\nage: %d\n gpa: %f\n grade: %c\n Name: %s", age, gpa, grade, name); // format specifier for int is %d, float=%f an: d char =%c;

 return 0;
}