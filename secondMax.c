#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(){
	int n,i ;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	int first = INT_MIN, second = INT_MIN;
	for(i = 0 ; i < n ; i++){
		if(arr[i]>first){
			second = first;
			first = arr[i];
		}
		else if(arr[i]>second && arr[i]<first)
			second = arr[i];
	}
	printf("\nSecond max : %d",second);
	printf("\nMax : %d",first);
	return 0;
}
