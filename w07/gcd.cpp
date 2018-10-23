#include<stdio.h>
int gcd(int n,int k)
{
    int gcd;
        for(int i=1;i<=n;i++)
        {
           if(n%i==0 && k%i==0)
            gcd=i;
        }
    return gcd;
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
    printf("gcd(48,126) = %d\n",gcd(48,126));

    printf("rgcd(48,126) = %d\n",rgcd(48,128));
    printf("gcd(48,126) = %d\n",gcd(48,128));

    printf("rgcd(48,126) = %d\n",rgcd(48,144));
    printf("gcd(48,126) = %d\n",gcd(48,144));

    printf("rgcd(48,126) = %d\n",rgcd(48,48));
    printf("gcd(48,126) = %d\n",gcd(48,48));
}
