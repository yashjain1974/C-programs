#include <stdio.h>
#include<stdlib.h>
int* FunctionDangling(){
int a,b,sum;
a=34;
b=56;
sum=a+b;
return &sum;
}
int main()
{  //case 1:Deallocation of memory
    int b=34;
    int *ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=32;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=312;
    free(ptr);//ptr is now a dangling pointer
    printf("%d",ptr);


    //case 2: Returning Local Variable in Function Calls
int *dangptr=FunctionDangling();           //ptr is now a dangling pointer
  
  
  //case 3: If a variable goes out of scope
int *danglingptr2;
{
    int a=12;
    danglingptr2=&a;
}
//here variable is go out of scope
// danglingptr2 is now dangling pinter
printf("%d",*danglingptr2);  //Dangling pointer


    
    
    return 0;
}