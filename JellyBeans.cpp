#include <iostream>

using namespace std;

int main() {
    cout << "Hello! How many jelly beans to you think there are in the jar?. " << endl;
    cout << "The number is somewhere between 1 and 100" << endl;
    cout << "Enter a number from 1 to 100." << endl;
    int guess;
    cin >> guess;
    int num = rand() % 101;

    while (guess != num) {
        if (1 <= guess <= 100) {
            if (guess < num) {
                cout << "Guess higher" << endl;
                cin >> guess;

            }
            if (guess > num) {
                cout << "Guess lower" << endl;
                cin >> guess;        
            }
        }
    }
    if (guess == num) {
        cout << "You win!" << endl;
    }

}