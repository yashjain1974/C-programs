#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,a=0;
    int *i2;
    printf("hii");
    while(i<42452){
        printf("Hello User");
        i2=malloc(345465*sizeof(int));
        if(i%100==0){
            getchar();
        }
        i++;
        free(i2);
    }
    return 0;
}