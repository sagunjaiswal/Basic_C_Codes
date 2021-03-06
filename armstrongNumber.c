// C program to check whether the given number is Armstrong or not
/*
Program to check whether the given number is Armstrong or not is discussed here. A number is an Armstrong number when the sum of nth power of each digit is equal to the number itself. Here n is the number of digits in the given number. For example,
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int number, temp, remainder, result = 0, n = 0 ;
	printf("Enter an integer: ");
	scanf("%d", &number);
	temp = number;
	// Finding the number of digits
	while (temp != 0){
		temp /= 10;
		++n;
	}
	temp = number;
	// Checking if the number is armstrong
	while (temp != 0){
		remainder = temp%10;
		result += pow(remainder, n);
		temp /= 10;
	}
	if(result == number)
		printf("%d is an Armstrong number\n", number);
	else
		printf("%d is not an Armstrong number\n", number);
	return 0;
}
