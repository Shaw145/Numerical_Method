

# include<stdio.h>
#include<math.h>
#define f(x) (3*x - cos(x) - 1)
#define g(x) (3+ sin(x))

int main() { 

    float x0,x1;
    int i;

    printf("Enter the value of x0 : ");
    scanf("%f", &x0);

    x1 = x0 - (f(x0)/g(x0));
    i = 1;

    while (fabs(x1-x0)>0.0001)
    {
        x0 = x1;
        x1 = x0 - (f(x0)/g(x0));
        i++;
    }

    printf("Approximate Root = %.4f\n", x1);
    printf("No of Iteration = %d\n", i);
    

    return 0;
}