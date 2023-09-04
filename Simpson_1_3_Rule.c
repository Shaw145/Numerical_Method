
# include<stdio.h>
#include <math.h>
#define f(x) (x+1/x)

int main() { 

    float a,b,x,y,h,sum=0;
    int n,i;
    
    
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b : ");
    scanf("%f", &b);
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    h = (b - a)/n;
    
    for(int i =0; i<=n ; i++){
        
        x = a+(i*h);
        y = f(x);
        if(i == 0 || i == n){
            sum = sum + h*y/3;
        }

        else{
            if(i%2 != 0){
                sum = sum + 4*h*y/3;
            }
            else{
                sum = sum + 2*h*y/3;
            }
        }  

    }
    
    printf("The Ans is : %f" , sum);

    return 0;
}