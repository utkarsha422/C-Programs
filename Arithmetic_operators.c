#include<stdio.h>

int main(){
	int num1,num2;
	
	//Take user input
	
	printf("Enter First number (num1) : \n");
	scanf("%d",&num1);
	
	printf("Enter Second number (num2) : \n");
	scanf("%d",&num2);
	
	//Arithmetic operation
	
	printf("Addition = %d \n" ,num1 + num2);
	printf("Subtraction = %d \n" ,num1 - num2);
	printf("Multiplication = %d \n" ,num1 * num2);
	printf("Division = %d \n" ,num1 / num2);
	printf("Modules = %d \n" ,num1 % num2);
	
	
	return 0;
}
