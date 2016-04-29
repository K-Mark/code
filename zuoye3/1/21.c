#include<stdio.h>
int main()
{
	int m,n,i,final;
	int factorsum(int i);
	
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n: ");
	scanf("%d",&n);
	
	for(i=m;i<=n;i++){
		final=factorsum(i);
		if(final==i)
		printf("%5d",final);
	}
		
	
	
	
	
return 0;
}

int factorsum(int i){
	

	
	int j,sum;
	sum=0;
	for(j=1;j<=(i+1)/2;j++)
		if(i%j==0)
		sum=sum+j;

		return sum;
}
