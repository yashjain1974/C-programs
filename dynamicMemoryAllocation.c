#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    // use of malloc
    /*int *ptr;
    int n;
    printf("how many space do you want in Memory\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value you want to add\n");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Value at %d added is %d\n",i,ptr[i]);
    }*/
    
    // use of calloc
    int *ptr;
    int n;
    printf("how many space do you want in Memory\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value you want to add\n");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Value at %d added is %d\n",i,ptr[i]);
    }
    //use of realloc
    // use of malloc
    int *ptr2;
    printf("how many space do you want in Memory\n");
    scanf("%d",&n);
    ptr2=(int *)realloc(ptr,n*sizeof(int));
    free(ptr);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value you want to add\n");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("new Value at %d added is %d\n",i,ptr[i]);
    }
    
    free(ptr2);
   
   
    return 0;
}
