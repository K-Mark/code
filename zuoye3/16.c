#include<stdio.h>
int main()
{

	int n,m,t,a,b;
	
	
	printf("Input two integers: ");
	scanf("%d %d",&m,&n);
	
	a=m;
	b=n;
	while(m!=0){
		t=n%m;
		n=m;
		m=t;
	}
	printf("LCM is %d, GCD is %d",a*b/n,n);

	
return 0;
	
}
