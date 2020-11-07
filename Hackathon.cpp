#include "Hackathon.h"
using namespace std;

battleship::battleship(){
    cout << "------------------Welcome to Battleship--------------" << endl;
    cout << "Symbols list" << endl;
    cout << "S -> your ship" << endl;
    cout << "Press enter to continue" << endl;
    cin.ignore();
    
    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            my_board[i][j] = 'o';
        }
    }
    print_board();
    setup_player();
}

void battleship::setup_player(){
    int x1;
    int y1;
    int x2;
    int y2;
    cout << endl << "Enter x,y the coordinate to place your battleship (length = 2)" << endl;
    
    while(!(cin >> x1 >> y1) || x1>9 || x1<0 || y1>9 || y1<0){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Please enter a coordinate between 0 and 9" << endl;
    }
    my_board[y1][x1] = 'S';
    print_board();

    cout << "Enter an adjacent coordinate to finish placing the ship" << endl;
    while(!(cin >> x2 >> y2) || x2>9 || x2<0 || y2>9 || y2<0){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Please enter a coordinate between 0 and 9" << endl;
    }

    while(true){
    if(x2 == x1){
            if ( y2 == y1-1 || y2 == y1+1){
                break;
            }
            cout << "Please enter an adjacent coordinate" << endl;
            cin >> x2 >> y2;
    }else if(y2 == y1){
            if ( x2 == x1-1 || x2 == x1+1){
                break;
            }
            cout << "Please enter an adjacent coordinate" << endl;
            cin >> x2 >> y2;
    }else{
        cout << "Please enter an adjacent coordinate" << endl;
        cin >> x2 >> y2;
    }

    my_board[y2][x2] = 'S';
    print_board();
    }

    
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
            cout << setw(3) << right << my_board[i][j];
            if(j == 9){
                cout << endl;
                if(i != 9){
                    cout << left <<setw(3) << i+1;
                }
            }
        }
    }
};

void battleship::setup_oponent(){
    int x = rand() % 10;
    int y = rand() % 10;


};


battleship::~battleship(){

};


int main(){
    battleship b;
    
    return 0;
}