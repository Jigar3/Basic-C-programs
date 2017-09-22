// program to print primes until number n

#include<stdio.h>

int main(){
	printf("Enter the number ");
	int n,num=0;
	scanf("%d", &n);

	while(n!=1){
		int i,flag=0;
		for(i=2; i<n; i++){
			if(n%i==0){
				flag=1;
			}
		}

		if(flag==0){
			printf("%d ", n);
			num++;
		}
		n--;
	}

	printf("%d ", num);
}

