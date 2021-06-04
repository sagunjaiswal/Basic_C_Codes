/*
**********
**********
**********
**********
**********
**********
**********
**********
**********
**********
*/
#include<stdio.h>
#include<conio.h>
int main(){
	int rows,columns,i,j;
	printf("\nEnter the number of rows : ");
	scanf("%d",&rows);
	printf("\nEnter the number of columns : ");
	scanf("%d",&columns);
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("* ");
		}
		printf("\n");
	}
}
