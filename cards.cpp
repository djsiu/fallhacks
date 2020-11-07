#include <iostream>
#include <vector>

using std::string;
using std::vector;

using namespace std;

int main() {

    cout << "this is a deck of cards: " << endl;

    Deck my_deck;
    initialize(my_deck);
    print_deck(my_deck);

}