#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct Pos
{
    int row;
    int col;
};
int prArr(int m[][8])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
}
Pos findNextBestPos(int m[][8],int access[][8],int row,int col)
{
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextRow,nextCol;
    int min=9;
    int minRow=-1,minCol=-1;
    access[row][col]=0;
    for(int i=0;i<8;i++)
    {
        nextRow=row+v[i];
        nextCol=col+h[i];
    if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol<=7 && access[nextRow][nextCol]>0)
        {
            access[nextRow][nextCol]--;
            if(access[nextRow][nextCol]<min)
            {
               min=access[nextRow][nextCol];
               minRow=nextRow;
               minCol=nextCol;
            }
        }
    }
    pos.row=minRow;
    pos.col=minCol;
    return pos;
}
int main()
{
    int m[8][8]={0};
    int access[8][8] =
       { 2, 3, 4, 4, 4, 4, 3, 2,
         3, 4, 6, 6, 6, 6, 4, 3,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         3, 4, 6, 6, 6, 6, 4, 3,
         2, 3, 4, 4, 4, 4, 3, 2
	   };
    Pos pos;
    int moves=1;
    //===============
    srand(time(NULL));
    int row=rand()%8;
    int col=rand()%8;
    //===============
    m[row][col]=1;
    //===============

    printf("1:(row,col)=(%d,%d)\n",row,col);
    for(int i=2;i<=64;i++)
    {
        pos=findNextBestPos(m,access,row,col);
        if(pos.row==-1 && pos.col==-1)
        {
         break;

        }
        else
        {
            m[pos.row][pos.col]=i;
            moves++;
            row=pos.row;
            col=pos.col;
        }
    }
           prArr(m);
           printf("\nTotal moves: %d\n",moves);
}
