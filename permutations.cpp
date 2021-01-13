#include<stdio.h>
int main()
{
	long int n,i,j;
	scanf("%ld",&n);
	if(n==1)
	printf("%ld",n);
	else{
	if(n<4 && n!=1)
	printf("NO SOLUTION");
	else{
	for(i=2;i<=n;i=i+2)
	printf("%ld ",i);
	for(j=1;j<=n;j+=2)
	printf("%ld ",j);
	return 0;	
}}}
