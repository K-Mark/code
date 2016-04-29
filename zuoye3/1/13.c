#include<stdio.h>
int main()
{
	double height,sum,heightf;
	int n,i;
	
	printf("Input height: ");
	scanf("%lf",&height);
	printf("Input n: ");
	scanf("%d",&n);
	
	heightf=height;
	for(i=1;i<=n+1;i++){
		sum=sum+heightf;
		height=height/2.0;
		heightf=height*2;
	}
	
	printf("distance=%.1f\n",sum);
	printf("height=%.1f\n",2*height);
	
return 0;
	
}
