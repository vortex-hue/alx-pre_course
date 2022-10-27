#include <stdio.h>

/**
* Main - practical usage of the getchar() and putchar() functions
* Reutrn - 0
*
*/

int main()
{
	char n1, n2, n3, n4, n5;
	printf("Only 5 Characters word needed\n\n");
	printf("_____________________________\n\n");
	printf("Enter your name: \n");
	n1=getchar();
	n2=getchar();
	n3=getchar();
	n4=getchar();
	n5=getchar();
	printf("You are not John, your name is ");
	putchar(n1);
	putchar(n2);
	putchar(n3);
	putchar(n4);
	putchar(n5);

	return 0;
}
