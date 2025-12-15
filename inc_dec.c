#include<stdio.h>

int main(){
	
	int a;
	printf("Enter Number : \n");
	scanf("%d", &a);  //20
	
	printf("Pre Increment = %d \n",++a); //21
	printf("Post Increment = %d \n",a++); //21
	printf("After post Increment = %d",a); //22
	
	printf("-------------");
	printf("Pre Increment = %d \n",--a); //21
	printf("Post Increment = %d \n",a--); //21
	printf("After post Increment = %d",a); //20
	
	return 0;
}
