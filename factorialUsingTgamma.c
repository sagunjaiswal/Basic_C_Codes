#include<stdio.h>
#include<math.h>
int main()
{
int n, res;
printf("Enter the number : ");
scanf("%d", &n);
res = tgamma(n + 1); 
printf("Factorial of the number %d is %d", n, res);
}

