#include<stdio.h>
int main()
{
    unsigned long long int n,m=1000000007,ans=1,i;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
        ans=(ans*2)%m;
    printf("%llu",ans);
    return 0;
}