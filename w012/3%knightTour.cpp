#include<stdio.h>
struct Pos
{
int row;
int col;
};
Pos KnightTour(int access[][8],int row,int col)
{
    Pos pos;
    int min=9;
    int minrow=-1,mincol=-1,nextrow,nextcol;
    int h[8]= {2,1,-1,-2,-2,-1,1,2};
    int v[8]= {-1,-2,-2,-1,1,2,2,1};
    access[row][col]=0;
    for(int i=0; i<8; i++)
    {
      nextrow=row+v[i];
      nextcol=col+h[i];
        if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && access[nextrow][nextcol]>0)
        {
          access[nextrow][nextcol]--;
            if(access[nextrow][nextcol]<min)
            {
              min=access[nextrow][nextcol];
              minrow=nextrow;
              mincol=nextcol;
            }
        }
    }
    pos.row=minrow;
    pos.col=mincol;
    return pos;
}
void prArr(int m[][8])
{
    for(int i=0;i<8;i++)
    {
        printf("|---|---|---|---|---|---|---|---|\n");
        for(int j=0;j<8;j++)
        {
            printf("%c%3d",'|',m[i][j]);
        }
        printf("%c\n",'|');
    }
    printf("|---|---|---|---|---|---|---|---|\n");
}
void prArrTwo(int n[][8])
{
    for(int i=0;i<8;i++)
    {
        printf("|---|---|---|---|---|---|---|---|\n");
        for(int j=0;j<8;j++)
        {
            printf("%c%3d",'|',n[i][j]);
        }
        printf("%c",'|');
        printf("\n");
    }
    printf("|---|---|---|---|---|---|---|---|\n");
}
int main()
{
    Pos pos;
    int choice,m[8][8]={0};
    int row,col,moves=1;
    int n[8][8]={0};
    int access[8][8]=
    {
        2, 3, 4, 4, 4, 4, 3, 2,
        3, 4, 6, 6, 6, 6, 4, 3,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        3, 4, 6, 6, 6, 6, 4, 3,
        2, 3, 4, 4, 4, 4, 3, 2
    };
    while(choice!=3)
    {
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n");
        printf("=> choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            moves=1;
            printf("Enter row and col for number 1:");
            scanf("%d %d",&row,&col);
            m[row][col]=1;
            printf("The board for this test is:\n");
            for(int i=2;i<=64;i++)
            {
                pos=KnightTour(access,row,col);
                row=pos.row;
                col=pos.col;
                m[row][col]=i;
                moves++;
            }
            prArr(m);
            printf("The tour ended with %d moves.\n",moves);
            printf("This was a full tour!\n");
            break;
        case 2:
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    moves=1;
                    row=i;
                    col=j;
                    for(int k=1; k<64; k++)
                    {
                        m[row][col]=k;
                        pos=KnightTour(access,row,col);
                        moves++;
                        row=pos.row;
                        col=pos.col;
                    }
                    if(moves==64)
                    {
                        n[i][j]=64;
                    }
                    else
                    {
                        n[i][j]=0;
                    }
                }
            }
            prArrTwo(n);
            break;
        }
    }
return 0;
}
