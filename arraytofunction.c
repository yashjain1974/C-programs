#include <stdio.h>
int func(int array[]){
    int sum=0;
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
        sum=sum+array[i];
    }printf("the average of array values is %d \n", sum/3);
    // array[0]=45; Very important point that if you change any value herea , it get reflected in main.
}


void func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n",i,ptr[i]);
}
    *(ptr+2)=87;  
}

void func3(int arr[2][2]){
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           printf("the value at [%d,%d] is %d\n",i,j,arr[i][j]);
       }
       
   }
   
}


int main(int argc, char const *argv[])
{
    int arr[]={2,3,5,8};
    int arr2[2][2]={{2,3},{5,6}};
    func(arr);
    printf("value %d\n",arr[0]);
    printf("\n");
    func2(arr);
    printf("After changing arr[2] value :-\n");
    func2(arr);
    printf("\n");
    func3(arr2);
    return 0;
}

