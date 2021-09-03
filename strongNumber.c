#include<stdio.h>
int fact(int n){
	if(n==0)
		return 1;
	return n*fact(n-1);
}
int main(){
	int num,rem,sum=0,temp;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	temp = num;
	while(temp != 0){
		rem = temp%10;
		sum+=fact(rem);
		temp/=10;
	}
	if(num == sum)
		printf("\nSTRONG NUMBER");
	else
		printf("\nNOT A STRONG NUMBER");
}
