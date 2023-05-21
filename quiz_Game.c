#include <stdio.h>
#include <ctype.h>

int main()
{
char questions[][100]={"1. what year did the C languge debut?: ","2. who is creadited with creating C?:","3. what is the predcessor of C?: "};

char options[][100] = {"A. 1969","B. 1972","C. 1975","D. 1999","A. Dennis ","B. Nikola","C.John","D. Doc","A. objective C","B. B","C. C++","D. C#"};

char answers[3]={'B','A','B'};

int numberOfQuestion = sizeof(questions)/sizeof(questions[0]);

char guess;
int score=0;
printf("********************\n");
printf("QUIZ GAME\n");

for (int i = 0; i < numberOfQuestion; i++)
{
    printf("********************\n");
    printf("%s\n",questions[i]);
    printf("********************\n");
    for (int j =(i *4); j <(i*4) + 4 ; j++)
    {
     printf("%s\n",options[j]);
    }
    printf("guess: ");
    scanf("%c",&guess);
    fflush(stdin);
   guess= toupper(guess); 
    if( guess == answers[i]){
        printf("CORRECT! WELL DONE !\n");
        score++;
    }else{
        printf("WRONG!\n");
    }
}
printf("********************\n");
printf("FINAL SCOR:");
printf(" %d/%d\n",score,numberOfQuestion);
printf("********************\n");

    return 0 ; 
}