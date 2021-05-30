#include<stdio.h>

int main()
{
	char ch;
	printf("\nEnter a any alphanumeric character:");
	scanf("%c",&ch);
	printf("ASCII value of %c is %d",ch,ch);  // Prints the ASCII value of the input character
	return 0;
}
