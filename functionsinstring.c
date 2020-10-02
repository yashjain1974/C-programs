#include <stdio.h>
#include<string.h>
/*
int main()
{
    char x[]= "hello";
    char y[]="world";
    char z[23];
    //printf("%s\n",strcat(x, y));
    printf("%d\n",strcmp(y,x));
    printf("The length of string is %d\n",strlen(x));
    printf("Reverse of string x is %s:-\n",strrev(x));
    printf("%s\n",x);
    strcpy(z,y);
    puts(z);
    return 0;
}*/
int main(int argc, char const *argv[])
{
    char str1[54];
    char str2[54];
    char str[]=" yes!";
    gets(str1);
    printf("\n");
    gets(str2);
    printf("\n");
    printf("by combining both string:-%s",strcat(str1,str2));

    return 0;
}

