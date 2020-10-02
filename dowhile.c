#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x=0;
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    do{
        
        printf("%d\n",x+1);
        x+=1;
    
    }while(x<n);
    return 0;
}
