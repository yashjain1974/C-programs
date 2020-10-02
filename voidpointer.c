#include <stdio.h>
int main()
{
    int a=45;
    float b=65.90;
    void *ptr=&a;
    printf("%d\n",(*(int*)ptr));
    ptr=&b;
    printf("%f",(*(float*)ptr));
    return 0;
}