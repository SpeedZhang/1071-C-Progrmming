#include<stdio.h>
int main()
{
    printf("  |  1  2  3  4  5  6  7  8  9 \n");
    printf("--|----------------------------\n");

    for(int i=1;i<=9;i++)
    {
        printf("%d |",i);
        for(int j=1;j<=9;j++)
        {
            printf(" %2d",i*j);
        }
       printf("\n");
    }
    printf("--|----------------------------\n");
    printf("Coding by 1B-407410926\n\n");
}
