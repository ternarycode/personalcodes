#include <stdio.h>
#include <stdlib.h>

int generateRandom(void){
    int randomNumber;
    do{
        randomNumber = rand();
    }while(randomNumber >= 3 || randomNumber <= 1);
    return randomNumber;
}

int enemyTurn(int rockPaperOrScissors){
    char compDecision;
    if(rockPaperOrScissors == 1){
        compDecision = 'R';
    }else if(rockPaperOrScissors == 2){
        compDecision = 'P';
    }else if(rockPaperOrScissors == 3){
        compDecision = 'S';
    }
    return compDecision;
}

int decisionTime(char player1, char player2){
    if (player1 == 'R'){
		if (player2 == 'R'){
			printf("it's a draw!");
		}else if(player2 == 'S'){
			printf("you win!");
		}else if(player2 == 'P'){
			printf("your opponent wins!");
		}
	}
	if (player1 == 'P'){
		if (player2 == 'P'){
			printf("it's a draw!");
		}else if(player2 == 'R'){
			printf("you win!");
		}else if(player2 == 'S'){
			printf("your opponent wins!");
		}
	}
	if (player1 == 'S'){
		if (player2 == 'S'){
			printf("it's a draw!");
		}else if(player2 == 'P'){
			printf("you win!");
		}else if(player2 == 'R'){
			printf("your opponent wins!");
		}
	}
    return 0;
}

int main(void) {
    char playAgain;
    do{
        char playerChoice;
            printf("Player: (R)ock, (P)aper, or (S)cissors?: ");
		    scanf(" %c",&playerChoice);
	    int compNumber = generateRandom();
        char compChoice = enemyTurn(compNumber);
        printf("Your opponent chose %c. ",compChoice);
        decisionTime(playerChoice, compChoice);
        printf("\nPlay again? (y/n): ");
        scanf(" %c",&playAgain);
    }while(playAgain == 'y');
    printf("Thanks for playing!");
    return 0;
}
