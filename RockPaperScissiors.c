#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int randomnumber(int a){
    srand(time(NULL));
    return rand()%a;
}
void game(){
char playerchar,compchar;
    int b,c;
    int playerscore=0,compscore=0;
    char a[20];
    printf("----------Welcome to the Stone,Paper and Scissior Game-----------------\n");
    printf("Enter Player Name:-");
    scanf("%s",&a);
    getchar();
    printf("Welcome %s\n",a);
    printf("You have only Three Rounds");
    int i=0;
    char dict[]={'r','p','s'};
    while(i<=3){
        printf("\nChoose from Given below:- \n1 for rock\n2 for paper\n3 for scissiors\n");
        scanf("%d",&b);
        playerchar=dict[b-1];
        printf("Players Turn :-%c\n",playerchar);
        c=randomnumber(3);
        compchar=dict[c];
        printf("Computer's Turn:-%c\n",compchar);
        if(playerchar=='r' && compchar=='p'){
            printf("You Enter:-Rock\t\t\tComputer enter:=paper\n");
            printf("Computer Won\n");
            compscore+=1;}
        else if(playerchar=='r' && compchar=='s'){
            printf("You Enter:-Rock\t\t\tComputer enter:=scissior\n");
            printf("You Won\n");
            playerscore+=1;}
        else if(playerchar=='r' && compchar=='r'){
            printf("You Enter:-Rock\t\t\tComputer enter:=Rock\n");
            printf("Draw\n");}
        else if(playerchar=='p' && compchar=='r'){
             printf("You Enter:-Paper\t\t\tComputer enter:=Rock\n");
            printf("You Won\n");
            playerscore+=1;}
        else if(playerchar=='p' && compchar=='p'){
            printf("You Enter:-Paper\t\t\tComputer enter:=paper\n");
            printf("Draw\n");}
        else if(playerchar=='p' && compchar=='s'){
            printf("You Enter:-Paper\t\t\tComputer enter:=scissior\n");
            printf("Computer Won\n");
            compscore+=1;}
        else if(playerchar=='s' && compchar=='p'){
            printf("You Enter:-scissior\t\t\tComputer enter:=paper\n");
            printf("You Won\n");
            playerscore+=1;}
        else if(playerchar=='s' && compchar=='s'){
        printf("You Enter:-scissior\t\t\tComputer enter:=scissior\n");
            printf("Draw\n");}
        else if(playerchar=='s' && compchar=='r'){
            printf("You Enter:-scissior\t\t\tComputer enter:=Rock\n");
            printf("Computer Won\n");}

        
        printf("You Have only %d Round left",3-i);
        i++;
    


    }
    printf("\n");
    printf("------------RESULTS:---------------\n");
    printf("Players Score :-%d\n",playerscore);
    printf("Computer's score :-%d\n",compscore);
    if(playerscore>compscore){
        printf("%s Won The Game\n",a);
    }
    else if(playerscore<compscore){
        printf("Computer won the game\n");
    }
    else
    {
        printf("Game Draw\n");
    }
    

}
int main(int argc, char const *argv[])
{
    game();
    int a;
    char b;
    char arr[]={'n','y'};
    while(1){
        printf("Do you Want to Play again\n1 for yes \n0 for no\n");
        scanf("%d",&a);
        b=arr[a];
        if(b=='y'){
            game();
        }
        else if(b=='n'){
            printf("Thank you For Playing");
            break;
      }
       else{
           printf("Wrong Input");
       }

     }

    
    return 0;
}
