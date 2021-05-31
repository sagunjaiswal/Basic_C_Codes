/*
input : 5
1

1  2  1

1  2  3  2  1

1  2  3  4  3  2  1

1  2  3  4  5  4  3  2  1
*/

#include<stdio.h>
#include<conio.h>
int main(){
	int n ,i,j,k;
	printf("\nEnter the number of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++)
			printf("%d ",(j+1));
		for(k=(i-1);k>0;k--)
			printf("%d ",k);
		printf("\n");
	}
}
