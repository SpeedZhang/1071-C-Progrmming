#include<stdio.h>
void ori(int m[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%3d",m[i]);
    }
    printf("\n");
}
void sor(int m[],int n)
{
    for(int i=0;i<n;i++)
    {
        int tp;
            for(int j=0;j<n-1;j++)
            {
                if(m[j]>m[j+1])
                {
                tp=m[j+1];
                m[j+1]=m[j];
                m[j]=tp;
                }
            }
    }
    for(int k=0;k<n;k++)
    {
    printf("%3d",m[k]);
    }
}

int main()
{
    int m[10]={34,78,12,9,87,66,88,99,56,11};
    int n=10;
    int t;
 printf("original: ");
 ori(m,n);
 printf("sorting: ");
 sor(m,n);
 return 0;
}
