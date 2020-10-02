#include <stdio.h>
/*int main()
{
    int a=10;
    int isPrime=1;
    printf("What number :-");
    for(int i=2;i*i<a;i++){
        if((a%i)==0){
         isPrime=0;
        }}
    if(isPrime){
        printf("this is prime %d\n",a);
    }
    else{
        printf("This is not prime %d\n",a);
    }
    
    return 0;
}*/
int main()
{
    int n;
    printf("Enter number :-\n");
    scanf("%d",&n);
        for (int i = 0; i <=n; i++)
        {
            if((n%i)!=0){
                printf("This is a prime number");
                continue;
            }
            else{
                printf("This is not a prime number");
            }
        }
        
    
    return 0;
}
