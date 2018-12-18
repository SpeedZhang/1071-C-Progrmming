#include<stdio.h>
#define MAX 100
int Prime(int N)
{
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
            return 0;
    }
    return 1;
}
void FindPrimes(int primes[],int a,int b)
{
    int total=0;
    if(a==1)
    {
    for(int i=a+1;i<=b;i++)
    {
        if(Prime(i)==1)
            {
                primes[total]=i;
                printf("%d ",primes[total]);
            }
    }
    }
    else
    {
    for(int i=a;i<=b;i++)
    {
        if(Prime(i)==1)
            {
            printf("%d ",i);
            }
    }
    }
}
int main()
{
    int a=0,b=0;
    int primes[MAX];
    scanf("%d %d",&a,&b);
    FindPrimes(primes,a,b);

return 0;
}
