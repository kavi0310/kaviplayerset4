#include<stdio.h>
int main()
{
    int n,k,r,s=0,c=0;
    scanf("%ld",&n);
    scanf("%d",&k);
    while(n)
    {
        r=n%10;
        if(r==k)
        {
            c++;
        }
        n=n/10;
    }
    printf("%d",c);
}
