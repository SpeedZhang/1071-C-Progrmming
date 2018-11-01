#include<stdio.h>
#define MAX 100
#include<ctype.h>
int Prime(int N)
{
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
            return 0;
    }
    return 1;
}
int FindPrimes(int data[],int n1,int n2)
{
    int sum=0;
    for(int i=n1;i<=n2;i++)
    {
        if(Prime(i)==1)
        {
            data[sum]=i;
            sum=sum+1;
        }
    }
    return sum;
}
void listPrimes(int sum,int data[])
{
    for(int i=0;i<sum;i++)
    {
        printf("%3d",data[i]);
    }
    printf("\n");
}
void stats(int data[],int occurrences[],int sum)
{
    int count=0;
	for(int i=0;i<sum;i++)
    {
		occurrences[data[i]%10]++;
	}
	for(int i=0;i<10;i++)
    {
		if(occurrences[i]!=0)
		{
			printf("[%d]=%d, [",i,occurrences[i]);
			count=0;
			for(int j=0;j<sum;j++)
			{
				if(data[j]%10==i)
				{
				  count++;
				  if(count==occurrences[i])
				    printf("%d]\n", data[j]);
				  else
				  {
					printf("%d,", data[j]);
				  }
				}
		   }
		}
	}
}
void reset(int data[], int occurrences[])
{
	for(int i=0;i<MAX;i++)
        data[i]=-1;
	for(int i=0;i<10;i++)
        occurrences[i]=0;
}
int main()
{
int n1,n2;
int sum;
char cont='Y';
int data[MAX];
int occurrences[10];
    while(cont=='Y')
    {
    reset(data,occurrences);
    printf("Enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);
    printf("%d primes between %d and %d.\n",FindPrimes(data,n1,n2),n1,n2);
    sum=FindPrimes(data,n1,n2);
    listPrimes(sum,data);
    stats(data,occurrences,sum);
    printf("\nContinue(Y/N)?: ");
    getchar();
    cont=toupper(getchar());
    }
    return 0;
}
