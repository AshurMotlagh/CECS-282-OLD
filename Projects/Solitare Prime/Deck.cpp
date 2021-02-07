#include "Deck.h"

Deck::Deck() {

}

void Deck::refreshDeck() {

}

Card Deck::deal() {
    return storage[topCard++];
}

void Deck::shuffle() {

}

int Deck::cardsLeft() {
    return 0;
}

void Deck::showDeck() {

}
