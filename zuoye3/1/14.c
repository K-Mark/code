#include<stdio.h>
int main()
{

	int n,m,i,j,count,t;
	
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n: ");
	scanf("%d",&n);
	
	count=0;
	for(i=m;i<=n;i++){
		t=i;
		for(j=2;j<=t/2;j++)
			if(t%j==0)
				break;
		if(j>t/2&&i!=1){
			printf("%4d",t);
			count++;
			if(count%6==0)
				printf("\n");
				
			}
		
	}
	
	printf("\n");
	
return 0;
	
}
