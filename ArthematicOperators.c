#include <stdio.h>

int main()
{
 // Arthematic Operators

 // + addition
 // - Suntractiom
 // * Multiplication
 // / Division
 // % modulus(gives remainder)
 // ++ increment
 // -- decrement

 int x = 10;
 int y = 5;
 int a = x + y;
 printf("Addition :%d\n", a);
 int b = x - y;
 printf("Subtraction: %d\n", b);
 int c = a * b;
 printf("multiplication: %d\n", c);
 int d = x / y;
 printf("Division: %d\n", d);
 int e = x % y;
 printf("Modulus: %d\n", e);
 int f = x++;
 printf("post-Increment: %d\n", f);
 int g = ++x;
 printf("Pre-Increment: %d\n", g);
 int h = x--;
 printf("Post-Decrement: %d\n", x);
 int i = --x;
 printf("Pre-Decrement: %d\n", x);

 // Division

 int p = 5;
 int q = 2;
 float j = p / (float)q;
 printf("%.2f", j);
}
