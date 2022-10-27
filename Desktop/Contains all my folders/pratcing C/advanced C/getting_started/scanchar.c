#include <stdio.h>
#include <stdlib.h>

/**
* main - return a function named scanchar 
* scanchar - a function that scans to check if some characters are available in a particular name
* Return : found
*/

//void scanchar(char name[]);

int main()
{
	char s1, s2, s3, s4,s5;
	printf("Only 5 characters is accepted\n");
	printf("Welcome Chief, please what is your name: ");
	s1=getchar();
	s2=getchar();
	s3=getchar();
	s4=getchar();
	s5=getchar();
	printf("wow, you have an amazing name ");
	putchar(s1);
	putchar(s2);
	putchar(s3);
	putchar(s4);
	putchar(s5);
	printf("\n");

	if  ('a' == s1 || 'a' == s2 || 'a' == s3 || 'a' == s4 || 'a' == s5)
		printf("Sir, i found out 'A' is a character in your name\n");


	else if  ('e' == s1 || 'e' == s2 || 'e' == s3 || 'e' == s4 || 'e' == s5)
                printf("Sir, i found out 'E' is a character in your name\n");


	else if  ('f' == s1 || 'f' == s2 || 'f' == s3 || 'f' == s4 || 'f' == s5)
                printf("Sir, i found out 'F' is a character in your name\n");

 	else
                printf("No special character was found in your name brah ");
		putchar(s1);
		putchar(s2);
		putchar(s3);
		putchar(s4);
		putchar(s5);

	return 0;
}

/** void scanchar(char name[])
* {}
*/
