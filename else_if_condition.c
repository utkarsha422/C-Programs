#include<stdio.h>

int main(){
	int marks;
	printf("Enter Marks :");
	scanf("%d",&marks);
	
	if(marks<=100 && marks>=71){
		printf("A Grade");
	}
	else if(marks<=70 && marks>=51){
		printf("B Grade");
	}
	else if(marks<=50 && marks >=35){
		printf("Grade");
	}
	else{
		printf("You are fail");
	}
	return 0;
}
