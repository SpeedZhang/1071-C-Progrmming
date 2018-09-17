#include <stdio.h> 
#include <math.h>
int main(){
    int a,b,c;
    double X1, X2;  
    printf("find roots for equation ax^2+bx+c=0\n");
	printf("輸入 a b c :\n");
	scanf("%d %d %d",&a,&b,&c);
	if((b*b)-(4*a*c))
	{
		X1=(-b+sqrt((b*b)-4*a*c))/(2*a);
		X2=(-b-sqrt((b*b)-4*a*c))/(2*a);
		printf("For equation %dx^2 %dx + %d =0, two roots are:X1=%.1f,X2=%.1f", a, b, c, X1, X2);
	}
else{
	printf("沒有實數解");}
}



/*Enter a b c: 2 -3 1
For equation 2 x^2 -3 x + 1 =0, two roots are
x1 = 1.0
x2 = 0.5
*/
