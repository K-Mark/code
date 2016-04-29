#include<stdio.h>
int main()
{
	int n,x,min,i;
	
	printf("Input n: ");
	scanf("%d",&n);
	printf("Input numbers: ");
	scanf("%d",&x);
	
	min=x;
	for(i=1;i<n;i++){
		scanf("%d",&x);
		if(min>x){
			min=x;
			
		}
	}
	printf("min=%d",min);
	
return 0;
	
}
