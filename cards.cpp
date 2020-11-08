//cards.cpp

// program creating with help from https://www.youtube.com/watch?v=iMSMVqTlvjM
//

#include <iostream>
#include <vector>
#include <cstdlib> //for rand

using std::string;
using std::vector;

using namespace std;

enum Rank { one, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };
enum Suit { spades, hearts, diamonds, clubs };

struct Card {
    Rank rank;
    Suit suit;
    int num_suits = 4;
    int num_ranks = 13;
};

struct Deck {
    vector<Card> cards;
    string card_back;
    int max_deck_size = 52;
};

void initialize(Deck&);
void print_deck(const Deck&);
void print_card(const Card&);
void shuffle(Deck&);

int main() {

    cout << "this is a deck of cards: " << endl;

    Deck my_deck;
    initialize(my_deck);
    print_deck(my_deck);
    cout << "\nshuffling deck..." << endl;
    shuffle(my_deck);
    print_deck(my_deck);

}

//initializing a deck of cards
void initialize(Deck& deck) 
{
    Card card;
    for (int suit = 0; suit < card.num_suits; suit++) {
        for(int rank = 0; rank < card.num_ranks; rank++) {
            card.suit = Suit(suit);
            card.rank = Rank(rank);
            deck.cards.push_back(card);
        }
    }
}

//prints the cards in the deck
void print_deck(const Deck& deck) 
{
    for(Card c : deck.cards) {
        print_card(c);
    }
}

//prints a card
void print_card(const Card& card) 
{
    cout << "Rank = " << card.rank << "  " 
         << "Suit = " << card.suit << endl;
}

//shuffles the deck of cards
void shuffle(Deck& deck) 
{
    Deck shuffled;
    while(!deck.cards.empty()) {
        size_t rand_index = rand() % deck.cards.size();
        shuffled.cards.push_back(deck.cards[rand_index]);
        deck.cards.erase(deck.cards.begin() + rand_index);
    }
    deck = shuffled;
}
