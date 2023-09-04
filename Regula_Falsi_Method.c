
#include<stdio.h>
#include<math.h>
#define f(x)(3*x-cos(x)-1)

int main(){

	float a,b,c1,c2;
	int i;

	printf("enter the value of a & b : ");
	scanf("%f%f",&a,&b);

	c1=a;
	c2=b;
	i=1;

	while(fabs(c1-c2)>0.000001){

		c2=c1;
		c1=a+fabs(f(a))*(b-a)/(fabs(f(a))+fabs(f(b)));
		if(f(a)*f(c1)<0){

			b=c1;
		}
		else
		    a=c1;

		i++;
	}

	printf("the root = %.5f\n",c1);
	printf("no of iteration = %d",i);

	return 0;
}