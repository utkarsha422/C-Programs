#include<stdio.h>

int main(){
	
	int num1,num2;
	
	//Take user input
	
	printf("Enter First number (num1) : \n");
	scanf("%d",&num1);
	
	printf("Enter Second number (num2) : \n");
	scanf("%d",&num2);
	
	//Logical Operators
	printf("(num1 > num2) && (num1 > 0) = %d \n",(num1 > num2) && (num1 > 0));
	printf("(num1 > num2) || (num1 > 0) = %d \n",(num1 > num2) || (num1 > 0));
	printf("!(num1 == num2) = %d \n", !(num1==num2));
	
	return 0;
}
