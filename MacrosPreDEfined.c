#include <stdio.h>
int main()
{
    printf("Current File Name Is %s\n",__FILE__);
    printf("Todays Date Is %s\n",__DATE__);
    printf("LIne Number is %d\n",__LINE__);
    printf("Time Now Is %s\n",__TIME__);
    printf("ANSI %d",__STDC__);
    return 0; 
}