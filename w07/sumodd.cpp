#include<stdio.h>
int sumodd1(int n)
{
    int odd1=0;
    for(int i=1;i<=n;i++)
    {
        odd1=odd1+(2*i-1);
    }
    return odd1;
}
int sumodd2(int n)
{
    int odd2=0;
    for(int i=1;i<=n/2+1;i++)
    {
        odd2=odd2+(2*i-1);
    }
    return odd2;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("sumodd1(%d) = %d\n",n,sumodd1(n));
    printf("sumodd2(%d) = %d\n",n,sumodd2(n));
}
