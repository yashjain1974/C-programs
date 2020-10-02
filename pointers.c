#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=80;
    int *ptr=&a;
    int *ptr2=NULL;
    printf("address :- %p\n",&ptr);
    printf("address of a :- %p\n",&a);
    printf("address of a:-%p\n",ptr);
    printf("value of a :- %d\n",*ptr);
    printf("address of ptr2 :- %p\n",ptr2);
    return 0;
}
