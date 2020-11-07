#include <iostream>
#include <iomanip>

class battleship{
    public:
    battleship();
    ~battleship();
    void print_board();

    private:
    void setup_player();
    void setup_oponent();
    int board[10][10];


};