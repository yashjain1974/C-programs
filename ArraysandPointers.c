#include <stdio.h>
int main()
{
    // int a=2; //int take 4 bytes in memory so it decreases by 4 places on decrementing
    // char b='d'; //char take 1 byte in memory so it is decreased by 1 place on decrementing
    // int *ptr=&a;
    // char *ptr2=&b;
    // printf("%d\n",ptr);
    // printf("%d\n",ptr-1);
    // printf("%d\n",ptr2);
    // printf("%d\n",ptr2-1);
    int arr[]={100,3,43,5,43,45};
    printf("%d\n",arr[0]);
    printf("the address of arr[0] is %d\n",&arr[0]);
    printf("the address of arr[0] is %d\n",arr);
    printf("the address of arr[1] is %d\n",&arr[1]);
    printf("the address of arr[1] is %d\n",arr+1);
    // arr--;  this line will throw an error

    printf("the value at address of arr[0] is %d\n",*(&arr[0]));
    printf("the value at address of arr[0] is %d\n",*(arr));
    printf("the value at address of arr[1] is %d\n",*(&arr[1]));
    printf("the value at address of arr[1] is %d\n",*(arr+1));
    

    return 0;
}
