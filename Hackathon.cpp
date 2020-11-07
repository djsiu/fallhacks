#include "Hackathon.h"
using namespace std;

battleship::battleship(){
    cout << "Welcome to Battleship" << endl;
    cout << "Press enter to continue" << endl;
    cin.ignore();
    
    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            board[i][j] = 0;
        }
    }
}

void battleship::setup_player(){
    int coordinate;
    cout << "Enter x,y the coordinate to place your battleship (length = 2)" << endl;
    cin >> coordinate;
};

void battleship::print_board(){
    cout << "   ";
    for (int i = 0; i < 10; i++){
        cout << setw(3) << i;
    }
    cout << endl << endl;

    cout  << setw(3) << left << 0;

    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            cout << setw(3) << right << board[i][j];
            if(j == 9){
                cout << endl;
                cout << left <<setw(3) << i+1;
            }
        }
    }

};

void battleship::setup_oponent(){

};


battleship::~battleship(){

};


int main(){
    battleship b;
    b.print_board();
    
    return 0;
}