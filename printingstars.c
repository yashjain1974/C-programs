#include <stdio.h>
int starpattern(int rows){
for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");}
}
int reversestarpattern(int rows){
for (int i = rows; i >0; i--)
{
    for(int j=i;j>0;j--){
     printf("*");
    }
    printf("\n");
}
}
int main()
{
    //char c="*";
    int n;
    printf("which length you want to print:-\n1 for straight\n2 for reverse\n");
    scanf("%d",&n);
    if(n==1){
        int num;
        printf("what length you want to print:-");
        scanf("%d",&num);
        starpattern(num);
    }
    else if(n==2){
        int num;
        printf("what length you want to print:-");
        scanf("%d",&num);
        reversestarpattern(num);
    }
    
    return 0;
}