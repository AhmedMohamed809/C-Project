#include <stdio.h>

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
char name[25];
int age ;
printf(" \n what is your name  :");
scanf("%s",&name);
printf(" \n How old are you :");
scanf("%d",&age);
printf("\nyour name is %s  and your are %d years old " ,name, age);
switch (age)
{
case 20:
    printf("\nyou are the best");
    break;
    case 0:
    printf("\nyou ardenot born !");
    break;

default:
printf("\nenter vaild age ");
    break;
}
// if ( age >=18){
//     printf("\nyou are singin now !");
// }else{
//     printf("\nYou under 18 !! Sorry We can't singup!!");
// }
    return 0;
}