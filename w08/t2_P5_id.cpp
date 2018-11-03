#include<stdio.h>
void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
}
void drawRect(int h,int w)
{
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void rdrawRect(int h,int w)
{
    if(h==1)
    {
        prchar('*',w);
        printf("\n");
    }
    else
    {
        rdrawRect(h-1,w);
        prchar('*',w);
        printf("\n");
    }
}
int main()
{
    int h,w;
    printf("Enter height:");
    scanf("%d",&h);
    printf("Enter width:");
    scanf("%d",&w);
    printf("Draw using iteration\n");
    drawRect(h,w);
    printf("Draw using recursion\n");
    rdrawRect(h,w);
    printf("Coding by 407410926");
}
