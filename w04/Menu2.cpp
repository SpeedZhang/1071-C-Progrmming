#include<stdio.h>

int main()
{
int choice;
while(1)
{
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==3)break;
switch(choice)
{
case 1:
void prchar(char c, int n)
{
        for(int i=1;i<=n;i++)
        printf("%c",c);
}
void drawRect(int height,int width,int filled)
{
        if(filled)
        {
          for(int i=1;i<=height;i++)
          {
             printf('*',width);
             printf("\n");
          }else
           {
            for(int i=1;i<=height;i++)
             {
              if(i==1||i==height||j==1||j==width)
                   printf("*");
                   else
                   printf(" ");
             }
                printf("\n");
           }
        }
}




}
}
}
