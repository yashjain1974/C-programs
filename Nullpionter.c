#include <stdio.h>
int main()
{
    int a=23;
    printf("%d\n",&a);
    int *ptr=NULL; 
    ptr=&a; 
    printf("%d\n",&ptr);
    if (ptr!=NULL){                 //Error handling
        printf("%d",*ptr);}
        else{
            printf("Not allowed this is a null pointer");
        }

    return 0;
}