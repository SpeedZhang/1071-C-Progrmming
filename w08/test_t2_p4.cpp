#include<stdio.h>
#define MAX 100
void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}
void listNumber(int data[],int N)
{
    for(int i=0;i<N;i++)
    {
        printf("%2d ",data[i]);
    }
    printf("\n");
}
int main()
{
    int N;
    int k;
    int sum=0;
    int A=0,B=0,C=0,D=0,E=0,F=0;
    int data[MAX];
    int NumberCount=0,PassCount=0,FailedCount=0;
    float Average;
    printf("Enter a series of scores between 0~100(-1 to exit).\n");
    scanf("%d",&N);
    while(N!=-1)
    {
        if(N==100)
        {
            A++;
        }
        else if(N<=99&&N>=90)
        {
            B++;
        }
        else if(N<=89&&N>=80)
        {
            C++;
        }
        else if(N<=79&&N>=70)
        {
            D++;
        }
        else if(N<=69&&N>=60)
        {
            E++;
        }
        else if(N<60)
        {
            F++;
        }
    data[NumberCount++]=N;
    sum=sum+N;
    scanf("%d",&N);
    }
    PassCount=A+B+C+D+E;
    FailedCount=F;
    printf("Scores listing:\n");
    listNumber(data,NumberCount);
    printf("The summary:\n");
    printf("NumberCount = %d\n",NumberCount);
    printf("FailedCount = %d\n",FailedCount);
    printf("PassCount = %d\n",PassCount);
    Average=(float)sum/(float)NumberCount;
    printf("Average = %4.1f\n\n",Average);
    printf("100   %d",A);
    prchar('*',A);
    printf("90~99 %d",B);
    prchar('*',B);
    printf("80~89 %d",C);
    prchar('*',C);
    printf("70~79 %d",D);
    prchar('*',D);
    printf("60~69 %d",E);
    prchar('*',E);
    printf("0~59  %d",F);
    prchar('*',F);
}
