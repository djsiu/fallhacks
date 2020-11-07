//cards.h

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