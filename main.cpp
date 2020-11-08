// main.cpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Battleship.h"

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
                
                return;
            }case 3 :{
                
                return;
            }case 4 :{

                return;    
            }case 5 :{

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