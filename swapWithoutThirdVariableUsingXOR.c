//ALTERNATIVE WAY OF SWAPPING TWO VARIABLES WITHOUT USING A THIRD VARIABLE
#include <stdio.h>

int main()
{
    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d %d",a,b);
    return 0;
}

