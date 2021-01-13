#include<stdio.h>
int main()
{
    unsigned long long int n,x,y,m,l;
    scanf("%llu",&n);
    while(n--)
    {
        scanf("%llu %llu",&x,&y);
        if (x==0 && y==0) puts("YES");
        else if (x==y)
        {
            if(x%3==0) puts("YES");
            else puts("NO");
        }
        else if(x>2*y || y>2*x) puts("NO");
        else if(x<=2*y || y<=2*x){
        m=x%3;
        l=y%3;
        if((l+m)%3==0) puts("YES");
        if((l+m)%3!=0) puts("NO");}
        else puts("NO");
    }
    return 0;
}