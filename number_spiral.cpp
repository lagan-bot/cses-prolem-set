#include<stdio.h>
int main()
{
	unsigned long long int x,y,t,ans;
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu %llu",&y,&x);
		if(x>y)
		{
			if(x%2==0) ans=(x*x-x+1)-(x-y);
			else ans=(x*x - x +1 ) + (x-y);
		}
		else
		{
			if(y%2==0) ans=(y*y-y+1)+(y-x);
			else ans=(y*y-y+1)-(y-x);
		}
		printf("%llu\n",ans);
	}
	return 0;
}
