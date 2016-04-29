#include<stdio.h>
int main()
{
	int t,a,n,min=100,max=1000,sum;
	
	
	for(n=min;n<max;n++){
		t=n;
		sum=0;
		while(t!=0){
			a=t%10;
			t=t/10;
			sum=sum+a;
		}
		t=n;
		if(sum==5)
			printf("%4d",t);
	}
	
return 0;
	
}
