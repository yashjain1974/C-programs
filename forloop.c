#include <stdio.h>
/*int main(int argc, char const *argv[])
{
    int x,y;
    for( x=0,y=0;y<10,x<5;x++,y++){
        printf("%d %d\n",x,y);
    }
    return 0;
}*/
int factorial(int n){
    int sum=1;
    for ( int i = 0; i < n; i++)
    {
      sum=sum*(i+1);
                    }
printf("%d",sum);
  
}
int main(int argc, char const *argv[])
{
    factorial(7);
    return 0;
}

