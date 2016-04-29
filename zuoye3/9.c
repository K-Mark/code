#include<stdio.h>
int main()
{
	int min=0,max=9,a,b,c,d;
	
	
	for(a=min+1;a<=max;a++)
		for(b=min;b<=max;b++)
			for(c=min;c<=max;c++)
				for(d=min;d<=max;d++){
					if(a*1000+b*100+c*10+d==(a*10+b+c*10+d)*(a*10+b+c*10+d))
						printf("%6d",a*1000+b*100+c*10+d);
				}
	
return 0;
				
}
