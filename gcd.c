//program to calculate gcd of two numbers

#include<stdio.h>

int main(){
	int a,i,b,lcm,gcd;
	printf("Enter two numbers whose GCD is to be found: \n");
	scanf("%d %d", &a, &b);
	
	for(i=a*b; i>0; i--){
		if(i%a==0 && i%b==0) lcm = i;
	}

	gcd = (a*b)/lcm;
	printf("%d\n", gcd);
}
