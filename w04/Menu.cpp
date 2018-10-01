#include<stdio.h>

int main()
{

    int choice;
    int height;
    int width;
    int type;


    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==3)break;     //設定離開指令
        switch(choice)     //兩類主情形
        {
        case 1:              //選擇印出矩形
            printf("Enter height and width: ");
            scanf("%d %d", &height, &width);     //存入高及寬
            for(int i=1;i<=height;i++){
                for(int j=1;j<=width;j++){
                    if(i==1 || i==height || j==1 || j==width)
                        printf("*");               //印出*
                    else
                        printf(" ");               //印出空心

                }
                printf("\n");                   //換行
            }
            break;             //離開迴圈
        case 2:             //選擇印出三角形
        	printf("Enter type :\n");
        	scanf("%d",&type);
        	if(type==1){
        		printf("Enter height and width: ");
            scanf("%d %d", &height, &width);
            for(int i=1;i<=height;i++){
            	for(int j=1;j<=width;j++){
            		if(i==j||i==height||j==1)
            		    printf("*");
            		else
					    printf(" ");    
				}
				printf("\n");
			}
            break;	
}
            else if(type==2){
            	printf("Enter height and width: ");
            scanf("%d %d", &height, &width);
            for(int i=1;i<=height;i++){
            	for(int j=1;j<=width;j++){
            		if(i+j==height+1||i==height||j==width)
            		    printf("*");
            		else
					    printf(" ");    
				}
				printf("\n");
			}
            
            break;
			}
			else if(type==3){
            	printf("Enter height and width: ");
            scanf("%d %d", &height, &width);
            for(int i=1;i<=height;i++){
            	for(int j=1;j<=width;j++){
            		if(i+j==height+1||i==1||j==1)
            		    printf("*");
            		else
					    printf(" ");    
				}
				printf("\n");
			}
            
            break;
			}
            else if(type==4){
            	printf("Enter height and width: ");
            scanf("%d %d", &height, &width);
            for(int i=1;i<=height;i++){
            	for(int j=1;j<=width;j++){
            		if(i==j||i==1||j==width)
            		    printf("*");
            		else
					    printf(" ");    
				}
				printf("\n");
			}
            
            break;
			}
        }
}
    }
