#include <stdio.h>
int sum(int a, int b);//Function declaration


// functions
void printstar(int n){   //without return value function
    for(int x=0;x<n;x++){
        printf("%c\n",'*');
    }
}
int sum(int a,int b){
    return a+b;
}
int takenumber(){
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}
void print(){
    printf("My name is yash\n ");
    
}


//main
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    a=20;
    b=40;
    c=sum(a,b);
    printf("The sum is  %d\n",c);
    printstar(8);
    d=takenumber();
    printf("your entered number is %d\n",d);
    print();
    
    return 0;
}
