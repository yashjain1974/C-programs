#include <stdio.h>
int main();
int length(){
    int a;
    printf("\nType which conversion you want:\n1.m to cm\n2.m to km\n3.m to inches\n4. m to foot\n");
    scanf("%d",&a);
    if(a==1){
        int b;
        printf("Enter value in m :");
        scanf("%d",&b);
        printf("Conversion to cm is %d cm",b*100);
    }
    if(a==2){
        int b;
        printf("Enter value in m :");
        scanf("%d",&b);
        printf("Conversion to km is %4.3f km",b*0.001);
    }
    if(a==3){
        int b;
        printf("Enter value in m :");
        scanf("%d",&b);
        printf("Conversion to inches is %f inch",b*39.3);
    }
    if(a==4){
        int b;
        printf("Enter value in m :");
        scanf("%d",&b);
        printf("Conversion to foot is %f foot",b*3.28);
    }

    
}
int weight(){

int a;
    printf("\nType which conversion you want:\n1.kg to g\n2.tonne to kg\n3.quintal to kg\n4. pound to kg\n");
    scanf("%d",&a);
    if(a==1){
        int b;
        printf("Enter value in kg :");
        scanf("%d",&b);
        printf("Conversion to g is %d g",b*1000);
    }
    if(a==2){
        int b;
        printf("Enter value in tonne :");
        scanf("%d",&b);
        printf("Conversion to kg is %d kg",b*1000);
    }
    if(a==3){
        int b;
        printf("Enter value in quintal :");
        scanf("%d",&b);
        printf("Conversion to kg is %d kg",b*100);
    }
    if(a==4){
        int b;
        printf("Enter value in pound :");
        scanf("%d",&b);
        printf("Conversion to kg is %f kg",b*0.45359237);
    }

    
    }
void repeat(){
    int g;
    while(1){
        printf("\n\nDo you wanna repeat again: \nEnter 0 for no\nEnter 1 for yes\n");
        scanf("%d",&g);
      switch (g)
      {
      case 1:
          main();
          break;
      case 0:
         printf("See you soon");
         break;
      
      default:
          break;
      }
      break;
        
        
    }
    
}
int main()
{
    int g;
    printf("What type of conversion you want:\n1 for length\n2 for weight\n");
    scanf("%d",&g);
    if(g==1){

    length();
    }
    else if(g==2){
    weight();
    }
    repeat();

    return 0;
    
}

