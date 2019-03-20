#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "poker.h"

int *lengths;

int main(int argc, char **argv) {
	srand(time(NULL));
	
	if (argc < 2) {
		printf("You forgot to state the number of cards.\n");
		return 0;
	}
	if (argc > 2) {
		printf("You are only allowed to request one set of cards.\n");
		return 0;
	}
	
	lengths = (int *) malloc(sizeof(int));
	lengths[0] = atoi(argv[1]);
	
	if (lengths[0] == 0) {
		printf("You are given 0 cards.\n");
		return 0;
	}
	printf("Your cards are: ");
	for (int i = 0; i < lengths[0]; i++) {
		Card c = randCard();
		printCard(c);
		printf(" ");
		burnCard(c);
	}
	printf("\n");
	return 0;
}
