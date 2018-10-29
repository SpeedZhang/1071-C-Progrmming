#include<stdio.h>
#define MAX 50
void prArr(int m[][MAX],int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%3d ",m[i][j]);
        }
        printf("\n");
    }
}
void magic_diag(int m[][MAX],int N)
{
    int row=5;
    int col=2;
    m[row][col]=1;
    for(int i=1;i<=N*N;i++)
    {
        if(i%N==1)
        {
            row=(row-1+N)%N;
        }
        else
        {
            row=(row+1)%N;
            col=(col+1)%N;
        }
        m[row][col]=i;
    }
}
int main()
{
    int N=5;
    int m[MAX][MAX];
    printf("Digonal Move\n");
    magic_diag(m,N);
    prArr(m,N);
}
