#include<stdio.h>

int main(){
	//Integer Types
	
	int i = 10;
	short int si = 5;
	long int li = 1234567;
	unsigned int ui = 4;
	
	//Character Types
	char c = 'A';
	
	//Floating-point Types
	float f = 3.14;
	double d = 3.142333;
	long double ld = 3.143323;
	
	printf("------Interger Types------\n");
	printf("int : value = %d , size = %zu byte \n",i,sizeof(i));
	printf("short int : value = %d , size = %zu byte \n",si,sizeof(si));
	printf("long int : value = %ld , size = %zu byte \n",li,sizeof(li));
	printf("unsigned int : value = %ui , size = %zu byte \n",li,sizeof(ui));
	
		printf("------Character Types------\n");
		printf("char : value = %c , size = %zu byte \n",c,sizeof(c));
		
		printf("------Floating point Types------\n");
		printf("float : value = %f , size =%zu byte \n",f,sizeof(f));
		printf("double : value = %lf , size =%zu byte \n",d,sizeof(d));
	    printf("long double : value = %Lf , size =%zu byte \n",ld,sizeof(ld));
	
	
	return 0;
}
