#include<stdio.h>
/*
void changeValue(int *address){
    *address=58;
    return;
}
int main(int argc, char const *argv[])
{
    int a=20;
    printf("%d\n",a);
    changeValue(&a);
    printf("after changing value of a :-\n");
    printf("%d",a);
    return 0;
}*/


/*void swap(int *x,int*y){
    int reverse;
    reverse=*x;
    *x=*y;
    *y=reverse;
    return;
}
int main()
{
    int a=20,b=40;
    printf("\t %d and %d\n",a,b);
    printf("After swapping:-\n");
    swap(&a,&b);
    printf("\t %d and %d",a,b);

    return 0;
}*/
void function(int *a,int*b){
    int c,d;
    c=*a;
     *a=*a+*b;
     *b=c-*b;
    return;

}
int main(int argc, char const *argv[])
{
    int a=34,b=54;
    function(&a,&b);
    printf("%d and %d",a,b);
    return 0;
}


