
#include <stdio.h>
#include <math.h>
#define f(x,y) ((sin(x+y)))
int main() {
    // Write C code here
    float x0,xn,h,y0,y1,n;
    
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
        y1 = y0 + h* f(x0,y0);
        y0 = y1;
        x0 = x0+h;
    }
    
    printf("The value of y(%f) is : %f",xn, y1);


    return 0;
}