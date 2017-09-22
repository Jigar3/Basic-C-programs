//program to create decimal to binary


#include<stdio.h>

int main(){
	int i=0,last,n;
	scanf("%d", &n);
	int a[10000];

	while(n/2!=0){
		a[i] = n%2;
		n = n/2;
		last = i;
		i++;	
	}

	a[last+1] = 1;

	for(i=(last+1); i>=0; i--){
		printf("%d", a[i]);
	}
}

