#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=0;
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    while(i<num){
        
        printf("%d\n",i);
        i+=1;
        
    }
    return 0;
}
