/*
********
*	   *
*	   *
********

*/

#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,rows,cols;
	printf("\nEnter the number of rows : ");
	scanf("%d",&rows);
	printf("\nEnter the number of cols : ");
	scanf("%d",&cols);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(j==0 || j==cols-1 || i==0 || i==rows-1)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
	}
}
