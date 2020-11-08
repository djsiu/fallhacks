#include "Battleship.h"
using namespace std;

battleship::battleship(){
    cout << "------------------Welcome to Battleship--------------" << endl;
    cout << "Symbols list" << endl;
    cout << "T -> your ship" << endl;
    cout << "Press enter to continue" << endl;
    cin.ignore();
    
    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            my_board[i][j] = 'o';
        }
    }
    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            opponent_board[i][j] = 'o';
        }
    }
    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            attack_board[i][j] = 'o';
        }
    }

    hitCount = 0;
    print_board();
    setup_player();
    setup_opponent();
    cout << endl << endl;
    print_atk_board();

    while(hitCount != 4){
        player_attack();
        cout << "Enter 1 to end your turn" << endl;
        cout << "Enter 2 to exit the game" << endl;
        int x;
        while(!(cin >> x) || x!= 1){
            if(x==2){
                return;
            }
            cout << "Enter 1 to end your turn" << endl << endl << endl;
        }
        opponent_attack();
    }
}

void battleship::setup_player(){
    for(int i = 0; i<num_of_ships; i++){
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
        my_board[y1][x1] = 'T';
        print_board();

        cout << endl <<"Enter an adjacent coordinate to finish placing the ship" << endl;
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
        }
        my_board[y2][x2] = 'T';
        print_board();
    }
    cout << "You have finished placing your battleships, now to attack." << endl << endl;
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

void battleship::setup_opponent(){
    // int x1 = rand() % 8 + 1;
    // int y1 = rand() % 8 + 1;

    // int x2 = x1;
    // int y2 = y1+1;

    // int x3 = rand() % 8 + 1;
    // int y3 = rand() % 8 + 1;

    // int y4 = y3;
    // int x4 = x3-1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 1;

    int x3 = 9;
    int y3 = 9;
    int x4 = 8;
    int y4 = 9;

    opponent_board[y1][x1] = 'E';
    opponent_board[y2][x2] = 'E';
    opponent_board[y3][x3] = 'E';
    opponent_board[y4][x4] = 'E';

};

void battleship::player_attack(){
    int x1;
    int y1;
    cout << "It's now your turn" << endl;
    cout << "H -> hit" << endl;
    cout << "M -> miss" << endl;

    cout << "Enter a coordinate you would like to attack" << endl;
    while(!(cin >> x1 >> y1) || x1>9 || x1<0 || y1>9 || y1<0){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Please enter a coordinate between 0 and 9" << endl;
    }

    if(opponent_board[y1][x1] == 'E'){
        attack_board[y1][x1] = 'H';
        cout << "You've hit the enemy battleship!" << endl;
        hitCount++;
    }else{
        attack_board[y1][x1] = 'M';
        cout << "Miss!" << endl;
    }
    if(hitCount == 4){
        cout << "-----------------Congradulations you win!-------------------" << endl;
        return;
    }
    print_atk_board();
};

void battleship::print_atk_board(){
    cout << "   ";
    for (int i = 0; i < 10; i++){
        cout << setw(3) << i;
    }
    cout << endl << endl;

    cout  << setw(3) << left << 0;

    for(int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            cout << setw(3) << right << attack_board[i][j];
            if(j == 9){
                cout << endl;
                if(i != 9){
                    cout << left <<setw(3) << i+1;
                }
            }
        }
    }
    cout << endl;
};

void battleship::opponent_attack(){
    int X_attack = rand() % 10;
    int Y_attack = rand() % 10;

    my_board[Y_attack][X_attack] = 'X';

    cout << endl << endl<< "Your opponent has attacked!" << endl;
    print_board();
};

battleship::~battleship(){

};

int main(){
    battleship b;
    
    return 0;
}