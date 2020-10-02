#include<stdio.h>
#include<string.h>
union student{
    char name[10];
    int id;
    int marks;

}u1;
int main()
{
    union u1;
    u1.id=34;
    u1.marks=52;
    printf("%d\n",u1.marks);
    printf("%d",u1.id);
    return 0;
}