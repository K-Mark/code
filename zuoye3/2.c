#include<stdio.h>
int main()

{
	int x,n,i,y,a,b,c,d,e;

	printf("Enter n:");
	scanf("%d",&n);

	a=b=c=d=e=0;
	for(i=1;i<=n;i++){
		printf("Enter grade %d:",i);
		scanf("%d",&x);
		y=x/10;
		switch(y){
			case 10:
			case 9:a++;break;
			case 8:b++;break;
			case 7:c++;break;
			case 6:d++;break;
			default:e++;break;
		}
	}
	printf("The number of A(90~100):%d\n",a);
	printf("The number of B(80~89):%d\n",b);
	printf("The number of C(70~79):%d\n",c);
	printf("The number of D(60~69):%d\n",d);
	printf("The number of E(0~59):%d\n",e);
	
return 0;
	
		
}




	
