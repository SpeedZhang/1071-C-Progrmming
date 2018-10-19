#include<stdio.h>
void ori(int m[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%2d ",m[i]);
    }
    printf("\n");
}
void sor(int m[],int n,int t)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(m[j]>m[j+1])
            {
                t=m[j+1];
                m[j+1]=m[j];
                m[j]=t;
            }
        }
            printf("%2d ",m[i]);
    }
}
int main()
{
    int m[10]={34,78,12,9,87,66,88,99,56,11};
    int n=10;
    int t,j;
 printf("original: ");
 ori(m,n);
 printf("sorting: ");
 sor(m,n,t);
 return 0;
}
