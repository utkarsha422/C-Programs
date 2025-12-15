#include<stdio.h>
 
int main(){
	/*int amount;
	
	printf("Enter Your Food Order Amount : ");
	scanf("%d",&amount);
	
	if(amount>500){
		printf("Congratulations! You get free delivery");
	}
	else{
		printf("Delivery Charges will apply");
	}*/
	
//Example 2
	int balance,withdraw;
	
	printf("Enter your balance :");
	scanf("%d",&balance);
	
	printf("Enter withdrawal amount :");
	scanf("%d" ,&withdraw);
	
	if(withdraw<=balance){
		printf("Withdraw Successfully \n");
		printf("Remaining balance = %d \n",withdraw-balance);
	}
	else{
		printf("Insufficient Balance");
	}
	return 0;
}

