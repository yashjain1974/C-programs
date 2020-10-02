#include <stdio.h>
int recursive(int n){
    if (n==1 ||n==2){
        return n-1;}
    else{
        return recursive(n-1)+recursive(n-2);
        }
}
int iterative(int n){
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
        
    }
    return a;
    
    

}
int main()
{
    int num;
    printf("Give number to print Fibonacci series\n");
    scanf("%d",&num);
    printf("using iterative approach:-%d\n",iterative(num));
    printf("using recursive approach:-%d \n",recursive(num));
    
    
    return 0;
}