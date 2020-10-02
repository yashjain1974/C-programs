#include <stdio.h>
#include<string.h>

int is_palindrome(int num){
    int reversed=0;
    int sum;
    sum=num;
    while(sum!=0){
        reversed = reversed*10 + sum%10;
        sum=sum/10;
   }
   printf("The reversed number is %d\n",reversed);
   if(num==reversed){
       return 1;
   }
   else{
       return 0;
   }
    
    
}
int main()
{
  int d;
  printf("Enter you number you want to check\n");
   scanf("%d",&d);    
   printf("Your Entered Number is %d\n",d);
   int a=is_palindrome(d);
    if(a==1){
        printf("Yes It is a Palindrome\n");
    }
    else{
        printf("No it is not a palindrome");
    }
    return 0;
}