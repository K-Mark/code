#include<stdio.h>
int main()
{
	double salary,rate,tax;
	
	printf("Enter the salary: ");
	scanf("%lf",&salary);
	
	if(salary<=850)
		rate=0;
	else if(salary<=1350)
		rate=0.05;
	else if(salary<=2850)
		rate=0.10;
	else if(salary<=5850)
		rate=0.15;
	else
		rate=0.20;
		
	tax=rate*(salary-850);
	printf("tax=%.02f",tax);
	
return 0;

}
