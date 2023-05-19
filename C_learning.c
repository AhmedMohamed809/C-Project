#include <stdio.h>
#include <stdbool.h>
int square(int); // function prototypes 

void birtday(char name[]){
    
    printf("\n Happy birthday %s",name);

}

int main(){
//     int age=10; 
//     char gander = 'M';
//     float y = 2.1;
//     char name[]="Ahmed";
// printf("My name is  %s  \n",name);
// printf("I'm  %d years old  \n",age); 
// printf("My gander is %c \n",gander);
// printf("Your GBA is %f",y);
//*************************************
// char name[25];
// int age ;
// printf(" \n what is your name  :");
// scanf("%s",&name);
// printf(" \n How old are you :");
// scanf("%d",&age);
// printf("\nyour name is %s  and your are %d years old " ,name, age);
// switch (age)
// {
// case 20:
//     printf("\nyou are the best");
//     break;
//     case 0:
//     printf("\nyou ardenot born !");
//     break;

// default:
// printf("\nenter vaild age ");
//     break;
// }
// if ( age >=18){
//     printf("\nyou are singin now !");
// }else{
//     printf("\nYou under 18 !! Sorry We can't singup!!");
// }
//####################
bool sun = true;
char name[25];
printf("Enter your name : ");
scanf("%s",&name);
birtday(name);
(!sun) ?  printf("\n it's sunny outside ")  : printf("\n it's cloud outside") ;
int x = square(2);
printf("This is Square %d", x);

    return 0;
}

int square(int x){
    return x*x;
}