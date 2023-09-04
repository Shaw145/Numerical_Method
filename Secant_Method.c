
# include<stdio.h>
#include<math.h>
#define f(x) (3*x-cos(x)-1)

int main() { 

    float x0,x1,x2;

    printf("Enter the Value of a & b : ");
    scanf("%f %f", &x0, &x1);

    x2 = x1 - (f(x1)*(x1-x0)/(f(x1)-f(x0)));
    
    int i =1;

    while (fabs(x2-x1)>0.000001){
    
        x0 = x1;
        x1 = x2;
        x2 = x1 - (f(x1)*(x1-x0)/(f(x1)-f(x0)));
        i++;
    }

    printf("The Root = %.5f\n", x2);
    printf("The No of Iteration = %d", i);
    


    return 0;
}


