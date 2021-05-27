#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	int count =0;

	srand((int)time(NULL));
	for(int i=0; i<10; i++){
		int num1 = rand()%13; //assigning "num1" with a random number between 0 and 12
		int num2 = rand()%13; //assigning "num2" with a random number between 0 and 12
		int product = num1 * num2; //to get the product between the two random numbers generated above^
		printf("What is %d x %d\n", num1, num2);
		int userProduct;
		scanf("%d", &userProduct); //creates input for the user to answer the question
		if(userProduct == product){ //cheakc to see if the input user made equals the product of the two random #'s
			printf("Correct!\n");
			count++;
		}
		else{
			printf("Incorrect..\n");
			printf("The correct answer is: %d\n", product);
		}

	}
	printf("Final Score: %d0%%\n", count);
}
