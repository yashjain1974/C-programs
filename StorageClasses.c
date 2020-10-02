#include<stdio.h>
// #include "size1.c"      //by this we can easily access the content of other file
int sum=30;
int func1(int a, int b){
    //int sum;
    extern int sum;     //we can easily acces aour global variable inside function by using extern
    printf("%d\n",sum);
    return a+b;
}

int main(int argc, char const *argv[])
{
    register int a=20;   //declaring register keyword
    int b;
    printf("%d\n",func1(a,b));
    return 0;
}

