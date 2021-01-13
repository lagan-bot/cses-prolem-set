#include<stdio.h>
int main()
{
unsigned long long int n,i,l,m,k,l1=0,l2=0,a[500000],b[500000];
    scanf("%llu",&n);
    if((n%4==0)||((n+1)%4==0))
    {
        printf("YES\n");
        if(n%2==0){
		 k = n/2;       
        for(i=0; i<k; i++)
        {
            if(i%2==0) {
                a[i/2]=i+1;
                a[k-1-i/2]=n-i;
                l1+=2;
            }
            else {
                 l =(i-1)/2; 
                m=k-1-((i-1)/2);
                 b[l]=i+1;
                b[m]=n-i;
                 l2+=2;
            } 
            
        }
            printf("%llu\n",l1);
         for(i=0; i<l1; i++)
            printf("%llu ",a[i]);
         printf("\n");
        printf("%llu\n",l2); 
       for(i=0; i<l2; i++){
             printf("%llu ",b[i]);}
        printf("\n");
        } 
        if(n%2!=0) {
		k =(n+1)/2;
		for(i=0; i<k; i++)
        {
            if(i%2==0) {
                a[i/2]=i+1;
                a[k-1-i/2]=n-1-i;
                if(a[k-1]==(n+1)) a[k-1]==k;
                l1+=2;
            }
            else {
                 l =(i-1)/2; 
                m=k-1-((i-1)/2);
                 b[l]=i+1;
                b[m]=n+1-i;
                 l2+=2;
            } 
        }
        printf("%llu\n",l1);
         for(i=0; i<l1; i++)
            printf("%llu ",a[i]);
         printf("\n");
        printf("%llu\n",l2-1); 
       for(i=0; i<l2; i++){
       	if (b[i]==k) continue;
             printf("%llu ",b[i]);}
        printf("\n");
        }
    }
    else printf("NO\n");
    return 0;
}
