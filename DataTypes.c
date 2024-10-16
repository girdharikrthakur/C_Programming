#include <stdio.h>
#include <stdbool.h>

int main()
{

 char a = 'C';         // single character
 char b[10] = "Hello"; // array of character

 float c = 3.1415921361536; // 4bytes (32 bits precision) 6- 7 digits %f;

 printf("%f", c);
 double d = 3.141763735386273656; // 8 bytes (64 bits of precision)  15-16 digits %lf

 bool e = true;                                   // 1 byte (true and false) %d;
 char f = 100;                                    // 1 byte (-128 to 127) %d for integer and  %c for character
 unsigned char g = 255;                           // i byte (0- 255)%d %c;
 short int h = 32767;                             // 2 bytes (-32,768 -+32767)  %d;
 unsigned short int i = 65535;                    // 2 bytes (0- 65,535) %d;
 int j = 2147483647;                              // 4 bytes (-2,147,483,648- 2,147,483,647) %d;
 unsigned int k = 4294967295;                     // 4 bytes (0- 42949672967295) %u
 long long int l = 934673647364736;               // 8 bytes(-9 quittillion to + 9 quittillion) //%lld
 unsigned long long int m = 18446744073709551615; // 8 bytes (0 to +18 quittillion) %llu;

 return 0;
}