#include <stdio.h>

/**
 * main - tricky codes number three
 * Return - return a value back
 */

 int main()
 {
   int a,b=1, c=1;

   a = sizeof(c = ++b +1);
   printf("a = %d, b = %d, c = %d\n", a, b, c);

   return 0; 
 }
