#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a=344;
    int *ptr;  //This is a wild pointer
    //*ptr=32;  //this is not a good thing;
    ptr=&a;
    printf("%d",ptr);
    return 0;
}