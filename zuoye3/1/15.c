#include<stdio.h>
int main()
{

	int n,a,sum;
	
	
	printf("Enter x: ");
	scanf("%d",&n);
	
	sum=0;
	if(n==0)
		printf("0");
	else
	do{
		a=n%10;
		n=n/10;
		sum=sum*10+a;
		
		
	}while(n!=0);
	printf("%d",sum);
return 0;
	
}
