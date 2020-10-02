#include <stdio.h>
#include<stdlib.h>
struct Employee{
    int id;
}Employee1,Employee2,Employee3;

int main(int argc, char const *argv[])
{
    
    char *ptr;
    int n;
    int i=0;
    while(i<3){
    printf("Enter Id of Employee %d\n",i+1);
    int b;
    printf("Enter The size of Id You want\n");
    scanf("%d",&b);
    ptr=(char*)malloc((b+1)*sizeof(char));
    printf("Enter you Employee id\n");
    scanf("%s",ptr);
    printf("Your Employee id is %s\n\n",ptr);
    i+=1;
    }  

}

