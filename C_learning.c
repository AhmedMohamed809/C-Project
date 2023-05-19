#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// int square(int); // function prototypes 

// void birtday(char name[]){
//     for (int  i = 0; i < 10; i++)
//     {
//         /* code */
//     printf("\n Happy birthday %s  %d",name , i );
//     }
    

// }

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
// bool sun = true;
// char name[25];
// printf("Enter your name : ");
// scanf("%s",&name);
// strupr(name);
// int result = strlen(name);
// printf("this is lenght of name is : %d", result);
// birtday(name);
// (!sun) ?  printf("\n it's sunny outside ")  : printf("\n it's cloud outside") ;
// int x = square(2);
// printf("This is Square %d", x);
// int numbers[] = {50,20,5,59};
// char names[][10]={"Ahmed","Alaa","hala"}; 
char x[15] = "Whater";
char y[15]= "soda";
char temp[15];
strcpy(temp,x);
strcpy(x,y);
strcpy(y,temp);
printf("X = %s\n",x);
printf("Y = %s",y);
// strcpy(names[0],"Hashim");
// for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++)
// {
// printf("%s\n", names[i]);
// }

// printf("\n Enter your name : ");
// fgets(name,25,stdin);
// name[strlen(name)-1]='\0';
// int r = strlen(name)-1;
// do
// {
//   printf("\n Enter your name : ");
//   fgets(name,25,stdin);
//   name[strlen(name)-1]='\0';
// r = strlen(name)-1;
// }while (r==0);
// printf("\nYour name is %s ",name);

    return 0;
}

// int square(int x){
//     return x*x;
// }