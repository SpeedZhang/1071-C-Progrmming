#include<stdio.h>

int main(){

    int year;
    printf("Enter year :");
    scanf("%d", &year);
0    if(year%4==0 &&year%100!=0||year%400==0){
    	printf("year %d is a leap year\n",year);
    }else{
    	printf("year %d is not a leap year\n",year);
	}
	    return 0;
} 
