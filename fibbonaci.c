// printing first n fibbonaci numbers

#include<stdio.h>

int main(){
	int i,n;
	scanf("%d", &n);	
	long long unsigned int a[10000];

	a[0]=1;
	a[1]=1;

	for(i=2; i<n; i++){
		a[i] = a[i-1] + a[i-2];
	}

	for(i=0; i<n; i++){
		printf("%llu ", a[i] );
	}
}
