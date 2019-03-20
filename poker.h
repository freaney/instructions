#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum suit_s {DIAMONDS, CLUBS, HEARTS, SPADES} Suit;

// 1-Ace, 11-Jack, 12-Queen, 13-King
typedef struct card_s {
	int rank;
	Suit suit;
} *Card;

typedef struct hand_s {
	Card c1;
	Card c2;
	Card c3;
	Card c4;
	Card c5;
} *Hand;

Card randCard();
void printCard(Card c);
void burnCard(Card c);
