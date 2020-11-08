// main.cpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <cstdlib> //for rand

#include "Battleship.h"
#include "cards.h"

using namespace std;
void user_interface(){
    while(true){
        int option;
        cout << "Which game would you like to play?" << endl;
        cout << "1. Battleship" << endl;
        cout << "2. Hangman" << endl;
        cout << "3. Jelly Beans" << endl;
        cout << "4. War" << endl;
        cout << "5. Storytime" << endl;
        cout << "6. Exit" << endl;
        
        cin >> option;
        switch(option){
            case 1 :{
                battleship b;
                return;
            }case 2 :{
                cout << "Sorry, Hangman is out of order! Please select another game." << endl;
                return;
            }case 3 :{
                cout << "Playing Jelly Beans ..." << endl;
                return;
            }case 4 :{
                cout << "Playing War ..." << endl;
                Deck my_deck;

                cout << "this is a deck of cards: " << endl;
                initialize(my_deck);
                print_deck(my_deck); 
                return;    
            }case 5 :{
                cout << "Playing Story Time ..." << endl;

                return;
            }case 6 :{
                cout << "Thank you for playing, see you next time." << endl;
                exit(1);
            }default:{
                cin.clear();
				cin.ignore(1000,'\n');
				cout << "Please enter the number associated with the option"<< endl;
				break;
            }
        }
    }
}

int main(){
    user_interface();
    cout << "this is the main file" << endl;
}