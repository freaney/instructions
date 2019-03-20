/*Poker? I barely know her!*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "poker.h"

Card randCard() {
	Card c = (Card) malloc(sizeof(Card));
	
	c->rank = (rand() % 13 + 1);

	int r = rand() % 4;
	switch (r) {
		case 0:
			c->suit = CLUBS;
			break;
		case 1:
			c->suit = HEARTS;
			break;
		case 2:
			c->suit = SPADES;
			break;
		case 3:
			c->suit = DIAMONDS;
			break;
		default:
			c->suit = CLUBS;
	}
	return c;
}

void printCard(Card c) {
	char *s;
	if (c->suit == DIAMONDS) {
		s = "Diamonds";
	} else if (c->suit == CLUBS) {
		s = "Clubs";
	} else if (c->suit == HEARTS) {
		s = "Hearts";
	} else if (c->suit == SPADES) {
		s = "Spades";
	}
	printf(" (%d,%s) ",c->rank,s);
	fflush(stdout);
}

void burnCard(Card c) {
	free(c);
}
