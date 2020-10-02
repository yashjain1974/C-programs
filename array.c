#include <stdio.h>
/*
int main(int argc, char const *argv[])
{
    int marks[4];
    int mark[]={2,3,43,54,65,756,56,43,54,67};
    for(int i=0;i<4;i++){
        printf("Enter marks in list");
        scanf("%d",&marks[i]);
        
    }
    for(int i=0;i<4;i++){
        printf("Enter marks %d in list %d\n",i,marks[i]);}
        for(int j=0;j<10;j++){
        printf("\n\nEnter marks %d in list %d\n",j,mark[j]);}
    
    // int marks[4];
    // marks[0]=374;
    // marks[1]=390;
    // marks[2]=36;
    // marks[3]=35;
    // printf("%d\n",marks[0]);
    // printf("%d",marks);
    return 0;
}*/
int main(int argc, char const *argv[])
{
    int marks[2][3]={{2,3,4},
    {5,6,7}};

    for (int i= 0; i < 2; i++)
    { for (int j = 0; j < 3; j++)
    {
        //printf(" 2-dimensional array [%d,%d] contain %d \n",i,j,marks[i][j]);
        printf(" %d ",marks[i][j]);
    }
    printf("\n");

    
    }
    marks[1][1]=45;
    printf("%d",marks[1][1]);
    
    return 0;
}

