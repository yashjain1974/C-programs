#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The numberb of args is %d\n",argc);
    for (int i = 0; i <argc; i++)
    {
        printf("the argument at index number %d is %s\n",i,argv[i] );
    }
    
    return 0;
}
