#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_reverse(char *str2,char *str1)
{
    int j=0;
    for(int i=strlen(str1)-1;i>=0;i--)
    {
        str2[j++]=str1[i];
    }
        str2[j]='\0';
}
void str_copy(char *str2,char *str1)
{
    int j=0;
    for(int i=0;i<=strlen(str1)-1;i++)
    {
        str2[j++]=str1[i];
    }
        str2[j]='\0';
}
int main()
{
    char *str1;
    char *str2;
    str1 = (char *)malloc(sizeof(char)*80);
    str2 = (char *)malloc(sizeof(char)*80);
    gets(str1);
    printf("string: ");
    printf("%s \n",str1);
    printf("reverse: ");
    str_reverse(str2,str1);
    printf("%s \n",str2);
    printf("copy :");
    str_copy(str2,str1);
    printf("%s",str2);
    return 0;
}
