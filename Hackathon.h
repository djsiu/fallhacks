#include <iostream>
#include <iomanip>

class battleship{
    public:
    battleship();
    ~battleship();
    void print_board();
    void player_attack();
    void print_atk_board();
    int hitCount;
    
    private:
    void opponent_attack();
    void setup_player();
    void setup_opponent();
    char opponent_board[10][10];
    char my_board[10][10];
    char attack_board[10][10];
    const int num_of_ships = 2;


};