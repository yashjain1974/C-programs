#include <stdio.h>

/*int main()
{
    int a;
    printf("Enter the number for their table: ");
    scanf("%d\n",&a);
    printf("Multiplication table of %d is as follows:\n",a);
    printf("%d x 1= %d\n",a, a*1);
    printf("%d x 2= %d\n",a, a*2);
    printf("%d x 3= %d\n",a, a*3);
    printf("%d x 4= %d\n",a, a*4);
    printf("%d x 5= %d\n",a, a*5);
    printf("%d x 6= %d\n",a, a*6);
    printf("%d x 7= %d\n",a, a*7);
    printf("%d x 8= %d\n",a, a*8);
    printf("%d x 9= %d\n",a, a*9);
    printf("%d x 10= %d\n",a, a*10);
    return 0;
}*/
int main()
{
    int num;
    printf("Give num for multiplication table: ");
    scanf("%d",&num);
    printf("Multiplication table of %d is :\n",num);
    for (int i = 1; i < 11; i++)
    {
        printf(" %d x %d = %d\n",num,i,num*i);
    }
    
    return 0;
}

