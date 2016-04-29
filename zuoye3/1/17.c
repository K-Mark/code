#include<stdio.h>
int main()
{
	int number,final,sum;
	int even(int n);
	printf("Input integers: ");
	scanf("%d",&number);
	
	sum=0;
	while(number>0){
		final=even(number);
		if(final==0)
			sum=sum+number;
			scanf("%d",&number);
	}
	
	printf("The sum of the odd numbers is %d\n",sum);
	
return 0;
}

int even(int n){
	
	if(n%2==0){
		return 1;
	}
		return 0;
}
