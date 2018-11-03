#include<stdio.h>
#include<ctype.h>
int checkSqrt(int N)
{
    for(int i=1;i<=N;i++)
    {
        if(N/i==i)
            return i;
    }
    return 0;
}
int main()
{
    int N;
    int m;
    char cont='Y';
    while(cont=='Y')
    {
    printf("Enter N: ");
    scanf("%d",&N);
    m=checkSqrt(N);
    if(m)
    {
        printf("Yes. %d = %d x %d\n",N,m,m);
    }
    else
    {
        printf("No.\n");
    }
    getchar();
    printf("Continue (Y/N):");
    cont=toupper(getchar());
    }
    printf("Coding by 407410926");
    return 0;
}
