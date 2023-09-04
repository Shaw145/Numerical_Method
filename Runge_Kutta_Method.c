
# include<stdio.h>
#include <math.h>
#define f(x,y) ((1+y)/(2+ (x*x)))

int main() { 

    float x0,xn,h,y0,y1,n,k1,k2,k3,k4,k;
    
    printf("Enter the value of x0 : ");
    scanf("%f", &x0);
    
    printf("Enter the value of y0 : ");
    scanf("%f", &y0);
    
    printf("Enter the value of h : ");
    scanf("%f", &h);
    
    printf("Enter the value of xn : ");
    scanf("%f", &xn);
    
    n = (xn - x0)/h;
    
    for(int i =1; i<=n ; i++){
        
        k1 = h * f(x0,y0);
        k2 = h * f((x0+h/2) , (y0+k1/2));
        k3 = h * f((x0+h/2) , (y0+k2/2));
        k4 = h * f((x0+h) ,(y0+k3));
        k = (k1 + 2*k2 + 2*k3 + k4)/6;
        y1 = y0+k;
        x0 = x0+h;
        y0 = y1;
    }
    
    printf("The value of y(0.6) is : %f" , y1);

    return 0;
}