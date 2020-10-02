#include <stdio.h>
// factorial example
int factorial(int num){
    if (num==0){
        return 1;}
    else if (num==1){
       return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
// Fibonacci series
int fibonacci(int num){
    if(num==1){
        return 0;
    }
    else if(num==2){
        return 1;
    }
    else{
        return(fibonacci(num-1)+fibonacci(num-2));
    }
}
int main(int argc, char const *argv[])
{
    int c,d,e,f;
    printf("What number you want to Factorize: ");
    scanf("%d",&f);
    printf("factorial of %d is %d:",f,factorial(f));
    printf("\nFibonacci series");
    printf("\nwhat you want to print:");
    scanf("%d",&e);
    for (int i = 1; i < e+1; i++)
    {
        d=fibonacci(i);
 printf("%d\n",d);
    }
    
 
    return 0;
}
