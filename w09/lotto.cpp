#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
struct Date
{
    int year;
    int month;
    int day;
};
struct Lotto
{
    Date date;
    int num[6];
};
int  main()
{
    Date date;
    Date dates[MAX];

    Lotto lotto;
    Lotto lottos[MAX];


    int N,temp;
    printf("Enter N: ");
    scanf("%d",&N);
    printf("\n");

    for(int i=0;i<N;i++)
    {
         lottos[i].date.year=rand()%11+2010;
         lottos[i].date.month=rand()%12+1;
         lottos[i].date.day=rand()%31+1;
         printf("%d/%02d/%02d\n",lottos[i].date.year,lottos[i].date.month,lottos[i].date.day);

        for(int j=0;j<6;j++)
        {
            do
            {
                temp=rand()%49+1;
                printf("%02d",lottos[i].num[j]);
            }
        }
    }
}
