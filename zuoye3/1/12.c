#include<stdio.h>
int main()
{
	double sum,s;
	int n,i,a,j;
	printf("Input a, n: ");
	scanf("%d %d",&a,&n);
	
	sum=0;
	for(i=1;i<=n;i++){
		s=0;
		for(j=1;j<=i;j++){
			s=s*10+a;
			
		}
		sum=sum+s;
	}
	
	printf("s=%.0f",sum);
	
return 0;
	
}
