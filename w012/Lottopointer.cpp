#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

struct Date{
   int year;
   int month;
   int day;
};

struct Lotto{
   Date date;
   int num[6];
};


int duplicate(int num[], int pos){
  for(int i=0;i<pos;i++){
    if(num[i]==num[pos]) return 1;
  }
  return 0;
}

int main(){
   Lotto *plottos[MAX];

   int n;
   int temp;
   printf("Enter N: ");
   scanf("%d", &n);
   printf("\n");

   for(int i=0;i<n;i++){
     plottos[i]=(Lotto *)malloc(sizeof(struct Lotto));
     plottos[i]->date.year = rand()%11+2010;
     plottos[i]->date.month = rand()%12+1;
     plottos[i]->date.day = rand()%31+1;
     printf("%d/%02d/%02d   ", plottos[i]->date.year, plottos[i]->date.month, plottos[i]->date.day );
     for(int j=0;j<6;j++){
        do{
           temp = rand()%49+1;
        }while(duplicate(plottos[i]->num,j));

        plottos[i]->num[j] = temp;
        printf("%02d ", plottos[i]->num[j]);
     }
     printf("\n");
   }
}
