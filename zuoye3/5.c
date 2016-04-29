#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,s,area,perimeter;
	
	printf("Enter 3 sides of the triangle: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a+b>c&&a+c>b&&b+c>a){
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter=a+b+c;
		printf("area=%.2f; perimeter=%.2f\n",area,perimeter);
	}
	else
		printf("These sides do not correspond to a valid triangle\n");
		
return 0;
		
	
}
