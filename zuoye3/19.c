#include<stdio.h>
int main()
{
	int number,final,digit=2;
	int countdigit(int n,int d);
	
	printf("Enter an integer: ");
	scanf("%d",&number);
	
	final=countdigit(number,2);
	
	printf("Number of digit %d: %d",digit,final);
	
return 0;
}

int countdigit(int n,int d){
	
	int a,count;
	d=2;
	count=0;
	do{
	a=n%10;
	n=n/10;
	
		if(a==d){
			count++;
		}
		
	}while(n!=0);
	
	return count;
	
}
