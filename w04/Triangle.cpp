#include<stdio.h>

int main (){

int choice;
int height;
int width;
int type;
do{
    printf("Main Menu: \n");
    printf("1. Rectangle :\n");
    printf("2. Vertical Triangle :\n");
    printf("3. exit :\n");
    printf("=>");
    scanf("%d",&choice);
switch(choice){
        case 1:
           printf("Enter height and width\n");
           scanf("%d %d",&height,&width);
for(int i=1;i<=height;i++){
        for(int j=1;j<=width;j++){
                if(i==1||i==height||j==1||j==width)
                   printf("*");
                else
                   printf(" ");
                }
                   printf("\n");
}
             break;

        case 2:
           printf("Enter height and type\n");
           scanf("%d %d",&height,&type);
for(int i=1;i<=height;i++){
        for(int j=1;j<=type;j++){
                if(i==j||i==1||j==type)
                   printf("*");
                else
                   printf(" ");
                }
                   printf("\n");
        }
                   break;
}
}
while(choice!=3);
}

