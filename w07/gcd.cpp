#include<stdio.h>
void gcd(int n,int k)
{
    int gcd;
    if(n!=0)
    k=k%n;
    else if(n==0)
    printf("gcd(48,126) = %d\n",gcd);
}
int rgcd(int n,int k)
{
    if(n==0)
        return k;
    else
        return rgcd(k%n,n);
}
int main()
{
    int n,k;
    printf("rgcd(48,126) = %d\n",rgcd(48,126));
    gcd(48,126);
}
