#include<stdio.h>
int b=50; //global variable
int func1(int b1){
    static int a=5;
    printf("the value of a is %d",a);
    a++;
    printf("\n%d",a+b1);
    
}
int main()
{
    int b=344;
    func1(b);
    printf("\n");
    func1(b);
    printf("\n");
    func1(b);
    printf("\n");
    func1(b);
    printf("\n");
    func1(b);
    return 0;
}
