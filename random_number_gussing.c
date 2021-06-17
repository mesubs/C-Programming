#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void guess(int n){
	int number , guessAttemp = 0 , guessNumber; 
	srand(time(0));
	number = rand() % n;
	
	printf("Guess a number from 1 to 100 : ");
	do {
		printf("%d",number);
		
		if (guessAttemp>9){
			printf("Sorry you Lose :(");
			break;
		}
		
	scanf("%d",&guessNumber);
	
		if (number > guessNumber){
			printf("Number is Greater : ");
			guessAttemp++;
		}
		else if (number < guessNumber){
			printf("Number is Smaller : ");
				guessAttemp++;
		}
		else if (number == guessNumber){
			printf("You guess correct number in %d attemps !",guessAttemp+1);
			break;
		}
		else{
			printf("Sorry something was wrong !!");
			break;
		}
	}
	while(guessNumber != number);

}

int main(){
	
	int n = 100;
	
	printf("   ----------------------------------------------\n\n");
	printf("\t    Number guessing game \n\n");
	printf("\t               **************\n");
	printf("\t                Happy Coding ! \n");
	printf("\t               ************** \n");
	printf("    ---------------------------------------------\n");
	
	guess(n);
	return 0;
}
