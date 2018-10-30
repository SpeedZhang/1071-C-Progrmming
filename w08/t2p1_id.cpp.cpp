#include<stdio.h>
#include<ctype.h>
int prime(int N)
{
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int N;
    char Continue='Y';
    while(Continue=='Y')
    {
       printf("Enter N: ");
       scanf("%d",&N);
       prime(N);
         if(prime(N))
         {
             printf("%d is a prime.\n",N);
         }
         else
         {
             printf("%d is not a prime.\n",N);
         }
         printf("Continue (Y/N)? ");
         getchar();
         Continue = toupper(getchar());
    }
    return 0;
}
