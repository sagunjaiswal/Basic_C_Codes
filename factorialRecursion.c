#include <stdio.h>
int factorial_of_a_number(int n)
{
if(n == 0)
return 1;
else
return (n * factorial_of_a_number(n-1));
}
int main()
{
int n;
printf("Enter the number : ");
scanf("%d", &n);
if(n < 0)
printf("Invalid input");
else
printf("Factorial of the number %d is %d", n, factorial_of_a_number(n));
return 0;
}

