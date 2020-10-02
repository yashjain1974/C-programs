#include <stdio.h>
int average(int a ,int b){
 float avg;
 avg=(a+b)/2;
 return avg;

}
void GreetingGoodevening(int (*ptr)(int,int)){
    printf("Good morning User\n");
    printf("The average is %d \n",ptr(5,4));
}
void GreetingGoodNight(int (*ptr)(int,int)){
    printf("Good night User\n");
    printf("The average is %d \n",ptr(5,4));
    }

int main()
{
    int (*ptr)(int,int);
    ptr=average;
    GreetingGoodevening(ptr);
    GreetingGoodNight(ptr);
    
    return 0;
}