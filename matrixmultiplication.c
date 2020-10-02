#include<stdio.h>
int main(int argc, char const *argv[])
{



    int a;
    int b;
    int c;
    int d;
    
    printf("PLease put you 1st Matrix Information \n");
    printf("Enter row:-\n");
    scanf("%d",&a);
    printf("Enter Column:-\n");
    scanf("%d",&b);
    printf("\n");
    
    
    int sum;
    int matrix1[a][b];
   // Taking Input form user
   printf("Write your First Row:-\n");
   for (int i = 0; i < a; i++)
   {
       for (int j = 0; j < b; j++)
       {
           int f;
           scanf("%d",&f);
           matrix1[i][j]=f;
           //printf("\t");
           //printf("%d\n",matrix1[i][j]);
       }
       //printf("\n");
   }
   //displaying matrix
   printf("Your Matrix is Given Below:-\n ");
   for (int h = 0; h < a; h++)
   {
       for (int k = 0; k < b; k++)
       {
           printf("%d ",matrix1[h][k]);
       }
       printf("\n");
       
   }
   
    
    printf("Please put your 2nd Matrix Information \n");
    printf("Enter Row:-\n");
    scanf("%d",&c);
    printf("Enter Column:-\n");
    scanf("%d",&d);
    printf("\n");
    int matrix2[c][d];
    if(b==c){
   printf("Write your First Row:-\n");
   for (int i = 0; i < c; i++)
   {
       for (int j = 0; j < d; j++)
       {
           int e;
           scanf("%d",&e);
           matrix2[i][j]=e;
           //printf("\t");
           //printf("%d\n",matrix1[i][j]);
       }
       //printf("\n");
   }
   printf("Your Matrix is Given Below:-\n ");
   for (int h = 0; h < c; h++)
   {
       for (int k = 0; k < d; k++)
       {
           printf("%d ",matrix2[h][k]);
       }
       printf("\n");
       
   }
   

   int result[a][d];
   for (int i = 0; i < a; i++)
   {
       for (int j = 0; j < d; j++)
       {
           for (int k = 0; k <b ; k++)
           {
               sum+=matrix1[i][k]*matrix2[k][j];
           }
        result[i][j]=sum;
        sum=0;
           
       }
       
   }
   
   printf("Your Multiplication is:-\n");
   for (int i = 0; i < a; i++)
   {
       for (int j = 0; j < d; j++)
       {
           printf("%d\t",result[i][j]);
       }
       printf("\n");
       
   }}
   else{
        printf("Your Multiplication is not feasible. This Is against Matrix Multiplication Rule\n");
    }
   
return 0;
}
