/*
*****
****
***
**
*

*/
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j;
	printf("\nEnter the number of rows : ");
	scanf("%d",&n);
	for(i=(n-1);i>=0;i--){
		for(j=i;j>=0;j--){
			printf("* ");
		}
		printf("\n");
	}	
}
