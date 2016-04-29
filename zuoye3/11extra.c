#include<stdio.h>
int main()
{
	int n,x,y,final;
	
	 scanf(" %d %d %d",&n,&x,&y);
	
	if(y%x==0)
		final=n-y/x;
	else
		final=n-y/x-1;
		
	printf("%d",final);
	
return 0;

}
