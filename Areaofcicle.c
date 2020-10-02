#include<stdio.h>
#include<math.h>
#define PI 3.14
float EucledianDistance(int x1,int y1,int x2,int y2){
    int distance;
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return distance;
}
float AreaOfCircle(int x1,int y1,int x2,int y2,float (*ptr)(int,int,int,int)){
    
      return PI*pow(ptr(x1,y1,x2,y2),2);
}
int main()
{
    float ptr;
    
    int x1,x2,y1,y2;
    printf("Enter x1:-");
    scanf("%d",&x1);
    printf("Enter y1:-");
    scanf("%d",&y1);
    printf("Enter x2:-");
    scanf("%d",&x2);
    printf("Enter y2:-");
    scanf("%d",&y2);
    ptr=AreaOfCircle(x1,y1,x2,y2,EucledianDistance);
    printf("Area of circle %4.2f",ptr);
    
    

    
    return 0;
}
