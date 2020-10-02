#include <stdio.h>
typedef struct  Student  //giving nick name std to struct Student
{
    
    char name[50];
    int id;
    int marks;
    char fav_char;
    
} std;
int main()
{
    typedef int* pointer;
    pointer a,b;
    typedef char c;
    typedef int i;
    int h=45;
    a=&h;
    printf("%d\n",a);
    std s1,s2;
    c arr[54];
    s1.id=21;
    printf("%d",s1.id);

    return 0;
}