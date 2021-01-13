#include<stdio.h>
#include<string.h>
int main ()
{
	char st[1000001];long int i,ans=1,best=1;
	scanf("%s",&st);
	for(i=0;i<strlen(st);i++)
	{
		if(st[i]==st[i+1]) ans++;
		if(st[i]!=st[i+1]) ans=1;
		if(best<ans) best = ans;
	}
	printf("%ld",best);
	return 0;
}
