#include <stdio.h>
#include <string.h>

int main()
{
 char string1[] = "Evil";
 char string2[] = "Hound";

 char LowerCase[] = strlwr(string1);
 printf("%s\n", LowerCase);  

 char upperCase[] = strupr(string2);
 printf("%s\n", upperCase);

 char conCatinate[] = strcat(string1, string2);
 printf("%s\n", conCatinate);
 char copyString[] = strcpy(string1, string2);
 printf("%s\n", copyString);
 char compareString[] = strcmp(string1, string2);
 printf("%s\n", compareString);
 char stringSet[] = strset(string1, '?');
 printf("%s\n", stringSet);
 char stringReverse[] = strrev(string1);
 printf("%s\n", stringReverse);
 char stringLength[] = strlen(string1);
 printf("%s\n", stringLength);

 return 0;
}