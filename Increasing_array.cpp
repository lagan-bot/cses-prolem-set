#include<stdio.h>
int main()
{
    long long int arr[200000],t,i,c=0;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
		scanf("%lld",&arr[i]);}
	
	for(i=0;i<t;i++)
	{	
		t=0;
		if(arr[i+1]-arr[i]!=0)
		{
				t=arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = t;
				c++;
		}
	}
	printf("%lld",c);
	return 0;
}
