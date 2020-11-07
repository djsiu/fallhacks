#include <iostream>
#include <vector>

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

int main() {

    cout << "this is a deck of cards: " << endl;

    Deck my_deck;
    initialize(my_deck);
    print_deck(my_deck);

}