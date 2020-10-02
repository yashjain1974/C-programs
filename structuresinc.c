#include <stdio.h>
#include<string.h>
struct  Student
{
    char name[50];
    int id;
    int marks;
    char fav_char;
    
};
struct Student harry,ravi,subham;  //global  variable
int main(int argc, char const *argv[])
{
    //struct Student harry,ravi,subham;  //local variable
    
    // harry.id=234;
    // harry.marks=80;
    // harry.fav_char='c';
    // ravi.id=235;
    // ravi.marks=90;
    // ravi.fav_char='d';
    struct Student harry={"harry",20,90,'p'};
    printf("my name is %s . my id is %d .I got %d marks.my favourite charcater is %c.\n",harry.name,harry.id,harry.marks,harry.fav_char);
    strcpy(ravi.name,"Ravi");
    //strcpy(harry.name,"Harry potter");
    printf("%s\n%s\n",harry.name,ravi.name);
    printf("%d",harry.id);
    return 0;

}

