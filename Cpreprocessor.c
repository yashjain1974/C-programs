#include <stdio.h>
#include"add.c"            //This Include add.c file

#define PI 3.14
//#undef PI
#define SQUARE(x) x*x
int main()
{
    int radius=5;
    float area=PI*SQUARE(radius);
    printf("%f",area);
}