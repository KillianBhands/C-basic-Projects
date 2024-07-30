#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int MAX = 100;
	int MIN = 1;
	int GUESSES = 0;
	int USER_GUESS;
	int DIFFICULTY;
	
	srand(time(0));
	
	int ANSWER  = (rand()%MAX)+ MIN;
	printf("----------------------*Rules*------------------------------- \n");
	printf("----	You can have from 1 guess to 9 guesses		----  \n");
	printf("----	Enter 0 if you want to have random guesses	---- \n");
	printf("------------------------------------------------------------ \n");	
	do{
	printf("How many guesses do you want to have? ");
	scanf("%d",&DIFFICULTY);
	if (DIFFICULTY <0 || DIFFICULTY >=10 ){
		printf("INVALID DIFFICULTY \n");
		printf("Choose DIFFICULTY AGAIN You IDIOT \n");
	}
}while ( DIFFICULTY >= 10 || DIFFICULTY <0);

	if (DIFFICULTY == 0){
		DIFFICULTY = (rand () % 9 ) +1;
	}
	
	printf("You have %d guesses \n", DIFFICULTY);

	do{
		printf("Enter your GUESS: ");
		scanf("%d",&USER_GUESS);
		if(USER_GUESS > ANSWER){
			printf("Too High \n");
		}else if(USER_GUESS < ANSWER){
			printf("Too Low \n");
		}else {
			printf("Correct \n");
			break;
		}
		GUESSES++;
		printf("You have %d guesses left \n",DIFFICULTY-GUESSES);
	}while(GUESSES<DIFFICULTY);
	
	printf("******************************************* \n");
	
	
	
	if(GUESSES <= DIFFICULTY && USER_GUESS==ANSWER){
		printf("CONGRATULATIONS, YOU WIN \n");
	}else if(USER_GUESS!=ANSWER){
		printf("YOU LOSE!! HAHA \n");
		
	printf("Number of guesses: %d",GUESSES);
	printf("The answer is :%d ",ANSWER);
}
}
