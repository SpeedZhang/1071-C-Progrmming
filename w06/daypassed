#include<stdio.h>
#include<ctype.h>
int leap(int year)
{
    if(year%4==0&&year%100!=0||year==400)
    return 1;
    else
    return 0;
}
int main()
{
    int mouth,day;
    int year;
    int days;
    int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char cont='Y';
while(cont=='Y')
{
        printf("Enter year: ");
        scanf("%d",&year);
        printf("Enter mouth and day: ");
        scanf("%d %d",&mouth,&day);
        m[1]=28;
        days=0;
    if(leap(year))
    {
        m[1]++;
    }
    for(int i=0;i<mouth-1;i++)
       {
          days+=m[i];
       }
      printf("%d days passed since 1/1/%d \n",days+day,year);
      printf("Continue (Y/N)? ");
      getchar();
      cont = toupper(getchar());
}
return 0;
}
