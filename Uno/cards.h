//cards.h

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


void initialize(Deck& deck) {
    Card card;
    for (int suit = 0; suit < card.num_suits; suit++) {
        for(int rank = 0; rank < card.num_ranks; rank++) {
            card.suit = Suit(suit);
            card.rank = Rank(rank);
            deck.cards.push_back(card);
        }
    }
}

void print_deck(const Deck& deck) {
    for(Card c : deck.cards) {
        print_card(c);
    }
}

void print_card(const Card& card) {
    cout << "Rank = " << card.rank << "  " 
         << "Suit = " << card.suit << endl;
}