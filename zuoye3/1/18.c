#include<stdio.h>
int main()
{
	int m,n,sum,i,count;
	int prime(int i);
	
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n: ");
	scanf("%d",&n);
	
	sum=count=0;
	for(i=m;i<=n;i++){
		if(prime(i)==1){
			sum=sum+i;
			count++;
		}
	}
	
	printf("count=%d, sum=%d",count,sum);
	
return 0;
}

int prime(int i){
	
	int j;
	
	if(i==1) return 0;
	for(j=2;j<=i/2;j++)
		
	if(i%j==0){
		return 0;
	}
		return 1;
	
}
