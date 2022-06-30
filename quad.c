#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,r1,r2,r1part,ipart,d;
	printf("enter the co-efficients:");
	scanf("%f %f %f",&a,&b,&c);
	if(a!=0)
{
	d=(b*b)-(4*a*c);
	if(d==0)
{
		r1=(-b)/(2*a);
		r2=r1;
		printf("the roots are equal r1=%f and r2=%f",r1,r2);
}
	else if(d>0)
{
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("\n the roots are distinct and real r1=%f and r2=%f \n",r1,r2);
}
	else if(d<0)
{
		r1part=-b/2*a;
		ipart=(sqrt(-d))/2*a;
		printf("\n the roots are imaginary: %f+i%f \n",r1part,ipart);
		printf("\n the roots are imaginary: %f+i%f",r1part,ipart);
		
}
else
{
	printf("not a quadratic equation");
}
}
}

