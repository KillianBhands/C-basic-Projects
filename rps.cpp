#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int move;
	int Options;
	int Comp_score=0;
	int Player_score=0;
	do{
	
	printf(" 1 is 'Rock', 2 is 'Paper' , 3 is 'Scissors', 4 is 'Well'  \n");
	
	
	do{
		printf("Make your move:");
		scanf("%d",&move);
		if (move<1 || move>4){
			printf("Do you know how to use your eyes? \n");
			printf("Again\n");
		}
	} while (move<1||move>4);
	
	srand(time(0));
	
	int comp = rand()%4+1;
	
	switch(move){
		case 1:
			printf("Your move is Rock \n");
			break;
		case 2:
			printf("Your move is Paper \n");
			break;
		case 3:
			printf("Your move is Scissors \n");
			break;
		case 4:
			printf("Your move is Well \n");
			break;
	}
	
	switch(comp){
		case 1:
			printf("Comp move is Rock \n");
			break;
		case 2:
			printf("Comp move is Paper \n");
			break;
		case 3:
			printf("Comp move is Scissors \n");
			break;
		
		case 4:
			printf("Comp move is Well \n");
			break;
	}
	
	if ( move == 1){
		if(comp == 1){
			printf("Draw");
		}else if(comp == 2 ){
			printf("You lose Haha ");
			Comp_score++;
		}
		else if(comp == 3 ){
			printf("You win ");
			Player_score++;
			
		}
		else if(comp == 4 ){
			printf("You lose Haha ");
					Comp_score++;
		}
	}else if(move == 2){
		if(comp == 1){
			printf("You win ");
			Player_score++;
		}else if(comp == 2 ){
			printf("Draw");
		}
		else if(comp == 3 ){
			printf("You lose Haha ");
					Comp_score++;
		}
		else if(comp == 4 ){
			printf("You lose Haha ");
					Comp_score++;
		}
	}else if(move == 3){
		if(comp == 1){
			printf("You lose Haha ");
					Comp_score++;
		}else if(comp == 2 ){
			printf("You win ");
			Player_score++;
		}
		else if(comp == 3 ){
			printf("Draw");
		}else if(comp == 4 ){
			printf("You lose");
					Comp_score++;
		}
		
	}else if(move == 4){
		if(comp == 1){
			printf("You win ");
			Player_score++;
		}else if(comp == 2 ){
			printf("You win ");
			Player_score++;
		}
		else if(comp == 3 ){
			printf("You win");
			Player_score++;
		}else if(comp==4){
			printf("Draw");
		}
	}
	
	printf("\n");
	printf("Comp Score : %d \n",Comp_score);
	printf("Player Score: %d \n",Player_score);
	printf("\n");
	
	printf("Press 1 to exit \n ");
	printf("Press 2 to continue \n");
	scanf("%d",&Options);
}while (Options != 1 );
	
	
}
