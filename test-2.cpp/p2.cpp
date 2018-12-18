#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10
int main()
{
    int k=0;
    int c=0;
    int m[MAX];
    srand(time(NULL));
    printf("Randomly generating 100 bit data\n");
    for(int i=0;i<=9;i++)
    {

        for(int j=0;j<=9;j++)
        {
            m[i]=rand()%2+1;
            printf(" %d",m[i]-1);
            if(m[i]==1)
            {
                k++;
            }
            else if(m[i]==2)
            {
                c++;
            }
        }
        printf("\n");
    }
    printf("Number(0) = %d\n",k);
    printf("Number(1) = %d\n",c);
float e,f;
 e=e+k;
 f=f+c;
    printf("Prob(0) = %.2f\n",e/100);
    printf("Prob(1) = %.2f\n",f/100);


    printf("Coding by 1B-407410926\n\n");
}
