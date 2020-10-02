#include<stdio.h>
#include<string.h>
void array(int array[]){
    for (int i = 0; i <= 4; i++)
    {
        printf("%d, ",array[i]);
    }
    
}
void reverseArray(int array[]){
    for (int i = 4 ; i >= 0; i--)
    {
        printf("%d, ",array[i]);
    }
    
}
int main(int argc, char const *argv[])
{
    int arr1[]={2 ,3 ,4 ,5 ,6 };
    printf("Given array is :-\n");
    array(arr1);
    printf("\n");
    printf("Reversed Array is:-\n");
    reverseArray(arr1);

    return 0;
}
