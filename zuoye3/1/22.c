#include<stdio.h>
int main()
{
	int m,n,i,final;
	int fib(int i);
	
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n: ");
	scanf("%d",&n);
	
	for(i=m;i<=n;i++){
		final=fib(i);
		if(final==i)
		printf("%d ",i);
	}

return 0;
	
}

int fib(int i){
	

	
	int x1,x2,j,x;
	
	
	if(i==1)
		x=1;
	 if(i==2)
		x=1;	
	if(i>=3){
		x1=1;
		x2=1;
	for(j=1;j<=i-2;j++){
		x=x1+x2;
		x1=x2;
		x2=x;
	}
}	
	

		return x;
}
