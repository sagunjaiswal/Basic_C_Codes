// C program to check whether a given character is upper case, lower case, number or special character 

#include<stdio.h>
int main()
{

	char ch;
	printf("\nEnter the character : ");
	scanf("%c",&ch);
//	if(ch >= 65 && ch <= 90)
	if(ch >= 'A' && ch <= 'Z')
		printf("Upper");
//	else if(ch >= 97 && ch <= 122)
	else if(ch >= 'a' && ch <= 'z')
		printf("Lower");
//	else if(ch >= 48 && ch <= 57)
	else if(ch >= '0' && ch <= '9')
		printf("Number");
	else
		printf("Symbol");
return 0;
}
