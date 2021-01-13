#include<stdio.h>
int main ()
{
	long int arr[200000]= { 0 },i,j,n,t=0;
	scanf("%ld",&n);
	for( i=0;i<n-1;i++){
		scanf("%ld",&t);
		arr[t-1]=1;
	}
	for( i=0;i<n;i++){
		if(arr[i]==0)
		printf("%ld",i+1);
	}
	return 0;
}
