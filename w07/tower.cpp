#include<stdio.h>
void tower1(int n,char from,char aux,char to)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower1(n-1,from,to,aux);
        printf("%c -> %c\n",from,to);
        tower1(n-1,aux,from,to);
    }
}
void tower2(int n,char to,char aux,char from)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower2(n-1,aux,to,from);
        printf("%c -> %c\n",from,to);
        tower2(n-1,to,from,aux);
    }
}
void tower3(int n,char from,char to,char aux)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower3(n-1,from,aux,to);
        printf("%c -> %c\n",from,to);
        tower3(n-1,aux,to,from);
    }
}
void tower4(int n,char to,char from,char aux)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower4(n-1,aux,from,to);
        printf("%c -> %c\n",from,to);
        tower4(n-1,to,aux,from);
    }
}
void tower5(int n,char aux,char from,char to)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower5(n-1,to,from,aux);
        printf("%c -> %c\n",from,to);
        tower5(n-1,from,aux,to);
    }
}
void tower6(int n,char aux,char to,char from)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower6(n-1,to,aux,from);
        printf("%c -> %c\n",from,to);
        tower6(n-1,from,to,aux);
    }
}
int main()
{
    printf("tower1(n,from,aux,to)\n");
    tower1(3,'A','B','C');
    printf("\n\n");

    printf("tower2(n,to,aux,from)\n");
    tower2(3,'A','B','C');
    printf("\n\n");

    printf("tower3(n,from,to,aux)\n");
    tower3(3,'A','B','C');
    printf("\n\n");

    printf("tower4(n,to,from,aux)\n");
    tower4(3,'A','B','C');
    printf("\n\n");

    printf("tower5(n,aux,from,to)\n");
    tower5(3,'A','B','C');
    printf("\n\n");

    printf("tower6(n,aux,to,from)\n");
    tower6(3,'A','B','C');
    printf("\n\n");
}
