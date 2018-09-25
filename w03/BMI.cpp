#include<stdio.h>

int main (){
	double KG,M,BMI;
	printf("Enter your 身高(M):");
	scanf("%lf",&M);
	printf("Enter your 體重(KG)");
	scanf("%lf",&KG);
    BMI=KG/(M*M);
while(KG>=0&&M>=0){
	if(BMI<18.5){
		printf("your BMI is: %.1lf \n",BMI);
		printf("your體重過輕\n");
	}
	else if(BMI>=18.5&&BMI<24){
		printf("your BMI is: %.1lf \n",BMI);
		printf("your體重正常\n");
	}
	else if(BMI>=24&&BMI<27){
		printf("your BMI is: %.1lf \n",BMI);
		printf("your體重過重\n");
	} 
	else if(BMI>=27&&BMI<30){
		printf("your BMI is: %.1lf \n",BMI);
		printf("your體重輕度肥胖\n");
	}
	else if(BMI>=30&&BMI<35){
		printf("your BMI is: %.1lf \n",BMI);
		printf("your體重中度肥胖\n");
	}
	else if(BMI>=35){
		printf("your BMI is: %.1lf \n",BMI);
		printf("your體重重度肥胖\n");
}
	printf("Enter your 身高(M):");
	scanf("%1f",&M);
	printf("Enter your 體重(KG)");
	scanf("%1f",&KG);
	
}
}
