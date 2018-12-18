#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char str1[10000];
char str2[10000];
gets(str1);
gets(str2);

int k;
k=(str2[0]-str1[0]);
printf("%d",k);



printf("\n\nCoding by 1B-407410926");



/*    int k;
    char m[10]={'A','B','C','D','E','F','G','H','I','J',};


    scanf("%d",&k);

    for(int i=0;i<=9;i++)
    {
       printf("%c",m[i]);
    }
    printf("\n");
    for(int i=k;i<=9;i++)
    {
       printf("%c",m[i]);
    }
    for(int j=0;j<=k-1;j++)
    {
        printf("%c",m[j]);
    }
*/

}
