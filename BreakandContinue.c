#include <stdio.h>
/*
int main(int argc, char const *argv[])
{
    int i;
    int age;
    for(i=0;i<10;i++){
        printf("Enter your age:",i);
        scanf("%d",&age);
        if(age<10){
            break;
        }
    }
    return 0;
}
*/
int main(int argc, char const *argv[])
{
    int i,age;
    for(i=0;i<50;i+=1){
        printf("Enter you age:\n",i);
        scanf("%d",&age);
        if(age<60){
            continue;
        }
        printf("yash is a  good boy\n");
    }


    return 0;
}

