#include <stdio.h>
int main(int argc, char const *argv[])
{
    // label:
    // printf("I am in label");
    // goto end;
    //  goto label;
    // end:
    // printf("i am in end");
    int num;
    for (int i = 0; i < 10; i++)
    {
       printf("%d\n",i);
       for ( int j = 0; j < 8; j++)
       {
           printf("enter 0 to exit");
           scanf("%d",&num);
           if (num==0){
               goto end;
           }
       }
       
       
    }
    end:
    
    
   
    return 0;
}
