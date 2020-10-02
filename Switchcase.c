#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    int marks;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your marks:");
    scanf("%d",&marks);
    switch(age){
        case 10:
        printf("age is 10\n");
        switch(marks){
            case 60:
            printf("your marks is below 60 (Grade C)");
            break;
            case 80:
            printf("Your marks is between 60 and 80 Grade(B)");
            break;
            case 100:
            printf("Your marks is between 80 an 90 Grade(A)");
            break;
            default:
            printf("You are failed");

        }
        break;
        case 20:
        printf("age is 20\n");
        switch(marks){
            case 60:
            printf("your marks is below 60 (Grade C)");
            break;
            case 80:
            printf("Your marks is between 60 and 80 Grade(B)");
            break;
            case 100:
            printf("Your marks is between 80 an 90 Grade(A)");
            break;
            default:
            printf("You are failed");
            
        }
        break;
        default:
        printf("Nothing matched");
    }
    return 0;
}

