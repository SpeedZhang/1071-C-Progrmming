#include<stdio.h>
int sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int rsum(int n)
{
    int rsum=0;
    for(int i=0;i<n;i++)
    {
        rsum=n-i;
        printf("%d\n",rsum);
    }
    if(n==1)
        return 1;
    else
        return sum(n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("sum(%d)=%d\n",n,sum(n));
    printf("rsum(%d)=%d\n",n,rsum(n));
}
