
#include<stdio.h>
#include<math.h>
#define f(x)(3*x-cos(x)-1)

int main(){

	float a,b,c;
	int i;

	printf("enter the value of a & b : ");
	scanf("%f %f",&a,&b);

	i=0;
	while(fabs(a-b)>0.000001){

		c=(a+b)/2;
        
		if(f(a)*f(c)<0)
		{
			b=c;
		}
		else
	   {
		 a=c;
       }

		i++;
	}

	printf("approximate value = %f\n",c);
	printf("no of iteration = %d",i);

	return 0;
}