#include<stdio.h>
int main()
{
    unsigned long long int n,i,ans=0;
    scanf("%llu",&n);
    for(i=5;i<=n;i*=5)
        ans+=(n/i);
    printf("%llu",ans);
    return 0;    
}