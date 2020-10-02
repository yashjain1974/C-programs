#include<stdio.h>
#include<string.h>
struct TravelAgency
{
    char name[20];
    int DrivingLicense;
    char route[20];
    int kms;
}s1,s2,s3;
void Driver(){
   int a;
    printf("Write your input for selecting driver\n1 for s1\n2 for s2\n3 for s3\n");
    scanf("%d",&a);
    if (a==1){
        int b,c;
        char dry[25];
        char eee[40];
        printf("Enter name:-\n");
        scanf("%s",&dry);
        printf("Enter Driving License no:-\n");
        scanf("%d",&b);
        printf("Enter kms travelled:-\n");
        scanf("%d",&c);
        printf("Enter Traveled Route:-\n");
        scanf("%s",&eee);
        
        strcpy(s1.name,dry);
        strcpy(s1.route,eee);
        s1.DrivingLicense=b;
        s1.kms=c;
        printf("-------------------Details of driver is:----------------\n\n");
        printf("Driver Details\nName:-%s\nDrivingLicense no:-%d\nKms Travelled;-%d\nRoutes:-%s",s1.name,s1.DrivingLicense,s1.kms,s1.route);
        }
        else if (a==2){
        int b,c;
        char d[20];
        char e[25];
        printf("Enter name:-\n");
        scanf("%s",&d);
        printf("Enter Driving License no:-\n");
        scanf("%d",&b);
        printf("Enter kms travelled:-\n");
        scanf("%d",&c);
        printf("Enter Traveled Route:-\n");
        scanf("%s",&e);
        
        strcpy(s1.name,d);
        strcpy(s1.route,e);
        s1.DrivingLicense=b;
        s1.kms=c;
         printf("-------------------Details of driver is:----------------\n\n");
        printf("Driver Details\nName:-%s\nDrivingLicense no:-%d\nKms Travelled;-%d\nRoutes:-%s",s1.name,s1.DrivingLicense,s1.kms,s1.route);
        }
        else if (a==3){
        int b,c;
        char d[20];
        char e[25];
        printf("Enter name:-\n");
        scanf("%s",&d);
        printf("Enter Driving License no:-\n");
        scanf("%d",&b);
        printf("Enter kms travelled:-\n");
        scanf("%d",&c);
        printf("Enter Traveled Route:-\n");
        scanf("%s",&e);
        
        strcpy(s1.name,d);
        strcpy(s1.route,e);
        s1.DrivingLicense=b;
        s1.kms=c;
         printf("-------------------Details of driver is:----------------\n\n");
        printf("Driver Details\nName:-%s\nDrivingLicense no:-%d\nKms Travelled;-%d\nRoutes:-%s",s1.name,s1.DrivingLicense,s1.kms,s1.route);
        }


}

int main()
{
    Driver();
    
    
    int str;
    while(1){
        printf("\n\nDo you wanna submit again/\n1 for yes \n2 for  no\n");
        scanf("%d",&str);
        switch (str)
        {
        case 1:
        Driver();
            continue;
        case 2:
        printf("Thank you \n");
        break;
        default:
        printf("Youe entered wrong input");
        break;
        }
        break;}

    return 0;
}

