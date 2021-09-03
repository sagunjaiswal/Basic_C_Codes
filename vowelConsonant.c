#include <stdio.h>

void vowelConsonant(char ch)
{
if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
printf("Vowel\n");
else
printf("Consonant\n");
}

int main()
{
char ch;
printf("\nEnter a character : ");
scanf("%c",&ch);
printf("\n%c is a ",ch);
vowelConsonant(ch);
return 0;
}
