#include <stdio.h>
#include<string.h>
void printstr(char str[]){
    int i=0;
    while (str[i]!=0)
    
    {
        printf("%c",str[i]);
    i++;
    }printf("\n");
    
}
int main()
{
    //char name[]="yash";  //or we can use ,char name[]={'y','a','s','h','\0'};
    //char str[52];
    char a[20];
    //char surname[]={'j','a','i','n','\0'};
    
    
    /*for(int i=0;i<4;i++){         //printing name 
      printf("%c",name[i]);
    }*/
    
    /*printf("\n");
    gets(str);          
    printf("%s\n",str);           //printing str
    //puts(str);
    printstr(str);         //function call
    return 0;*/
    char eee[20];
        printf("Enter name:-\n");
        printf("\n");
        gets(eee);
        strcpy(a,eee);
        printf("%s",a);
}