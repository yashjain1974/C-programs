#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char *operation;
    int num1,num2;
    operation=argv[1];
    num1=atoi(argv[2]);
    num2=atoi(argv[3]);
    printf("Operation is %s\n",operation);
    printf("Number1 is %d\n",num1);
    printf("Number2 is %d\n",num2);
    if(strcmp(operation,"add")==0){
        printf("Addition of number is %d ",num1+num2);
    }
    else if(strcmp(operation,"multiply")==0){
        printf("Multiplication  of number is %d ",num1*num2);
    }
    else if(strcmp(operation,"divide")==0){
        printf("Divide of number is %4.2f ",(float)num1/num2);
    }
    else if(strcmp(operation,"subtract")==0){
        printf("Subtraction of number is %d ",num1-num2);
    }
    
    return 0;
}
