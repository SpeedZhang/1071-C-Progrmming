#include<stdio.h>

    int main(){
    int sec;
    int hh,mm,ss;
    printf("Enter time :\n");
    scanf("%d",&sec);
    hh=sec/3600;
    mm=sec%3600/60;
    ss=sec%60;
    printf("%d sec=%02d:%02d:%02d\n",sec,hh,mm,ss);
    
	return 0;
}
