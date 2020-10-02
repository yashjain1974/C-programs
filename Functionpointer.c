#include <stdio.h>
int add(int a, int b){
return a+b;
}
int main()
{
    int (*fptr)(int,int);//declaring a function  pointer
    fptr=&add;  //creating a function pointer
    int d=fptr(4,5);  //dereferencing a function pointer
    printf("By adding value is %d\n",d);


    
    return 0;
}