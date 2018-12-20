#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
FILE *fp;
int counter=0;
struct Date
{
    int year;
    int month;
    int day;
};
struct Lotto{
   Date date;
   int num[6];
};
int n=0;
int duplicate(int num[], int pos){
  for(int i=0;i<pos;i++){
    if(num[i]==num[pos]) return 1;
  }
  return 0;
}
void randgen(Lotto lottos[],int n)
{
    int temp=0;
   for(int i=0;i<n;i++){
     lottos[counter].date.year = rand()%11+2010;
     lottos[counter].date.month = rand()%12+1;
     lottos[counter].date.day = rand()%31+1;
     //printf("%d/%02d/%02d   ", lottos[counter].date.year, lottos[counter].date.month, lottos[counter].date.day );
     for(int j=0;j<6;j++){
        do{
           temp = rand()%49+1;
        }while(duplicate(lottos[counter].num,j));

        lottos[counter].num[j] = temp;
        //printf("%02d ", lottos[i].num[j]);
     }
     counter++;
     //printf("\n");
   }
}
void showLottos(Lotto lottos[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
        for(int j=0;j<6;j++)
        {
            printf("%02d ", lottos[i].num[j]);
        }
        printf("\n");
    }
}
void reset(Lotto lottos[],int n)
{
    for(int i=0;i<n;i++)
    {
        lottos[i].date.year=0;
        lottos[i].date.month=0;
        lottos[i].date.day=0;
        for(int j=0;j<6;j++)
        {
            lottos[i].num[j]=0;
        }
    }
    printf("file has been reset to 0\n");
}
void readFile(Lotto lottos[],int n)
{
    int choice;
    char filename[80];
    printf("Enter filename to read: ");
    scanf("%s",filename);
    fp = fopen(filename, "r");
    if(fp==NULL)
    {
        printf("Error on writing to file\n");
        exit(1);
    }
    int i=0;
    while(fscanf(fp,"%d/%d/%d %d %d %d %d %d %d",
              &lottos[i].date.year,&lottos[i].date.month,&lottos[i].date.day,
              &lottos[i].num[0],&lottos[i].num[1],&lottos[i].num[2],
              &lottos[i].num[3],&lottos[i].num[4],&lottos[i].num[5])==9)
    {
        i++;
    }
    counter=i;
  fclose(fp);
  printf("%d lotto data written to file %s successfully\n",n,filename);
}
void writeFile(Lotto lottos[],int n)
{
    int choice;
    char filename[80];
    printf("Enter filename: ");
    scanf("%s",filename);
    printf("Choice: 1 for write over, 2 for append\n=> ");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp = fopen(filename, "w");
    }
    else
    {
        fp = fopen(filename, "a");
    }
    if(fp==NULL)
    {
        printf("Error on writing to file\n");
        exit(1);
    }
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
        for(int j=0;j<6;j++)
        {
            fprintf(fp,"%02d ", lottos[i].num[j]);
        }
        fprintf(fp,"\n");
    }
  fclose(fp);
  printf("%d lotto data written to file %s successfully\n",n,filename);
}
int main()
{
   Lotto lottos[MAX];

   int n=0;
   int temp=0;
   printf("Enter N: ");
   scanf("%d", &n);
   printf("\n");
   randgen(lottos,n);
   showLottos(lottos,counter);
   printf("\n");
   randgen(lottos,n);
   showLottos(lottos,counter);

   writeFile(lottos,counter);
   reset(lottos,counter);
   readFile(lottos,counter);
   showLottos(lottos,counter);
}
