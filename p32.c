#include<stdio.h>
int main()
{
    int n,k,i,a[100],f=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        f=1;
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
}
