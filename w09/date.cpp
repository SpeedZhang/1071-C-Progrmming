#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct Date
{
    int year;
    int month;
    int day;
};
int  main()
{
    Date date;
    Date dates[MAX];
    int N;
    printf("Enter N: ");
    scanf("%d",&N);
    printf("\n");
    for(int i=0;i<N;i++)
    {
         dates[i].year=rand()%11+2010;
         dates[i].month=rand()%12+1;
         dates[i].day=rand()%31+1;
        printf("%d/%02d/%02d\n",dates[i].year,dates[i].month,dates[i].day);
    }
}
