//program to compute taylor series
#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
	float deg,x,numr,deno,sum,term;
	int i;
	printf("Enter the degree:");
	scanf("%f",&deg);
	//convert degree to radian
	x=deg*(PI/180.0);
	numr=x;
	deno=1;
	i=1;
	sum=0;
	do
	{
	term=numr/deno;
	sum=sum+term;
	numr=-numr*(x*x);
	i=i+2;
	deno=deno*i*(i-1);
	 }while(fabs(term)>=0.000001);
	printf("the computed value of sin(%.2f) is= %f\n",deg,sum);
	printf("value obtained from bulit-in function:sin(%.2f)=%.2f",deg,sin(x));
	
	return 0;
}
	
