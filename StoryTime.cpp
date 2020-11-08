#include <iostream>

using namespace std;

int main() {
cout << "Let's write a story together!" << endl;

string place[] = {"park", "beach", "mountain"};
cout << "Pick a place to go! Enter a number:" << endl;
cout << "1: " << place[0] << endl;
cout << "2: " << place[1] << endl;
cout << "3: " << place[2] << endl;
int choice1;
cin >> choice1;

string sit[] = {"bench", "rock", "tree"};
cout << "Pick a place to sit! Enter a number:" << endl;
cout << "1: " << sit[0] << endl;
cout << "2: " << sit[1] << endl;
cout << "3: " << sit[2] << endl;
int choice2;
cin >> choice2;

string food[] = {"smoothie", "doughnut", "apple"};
cout << "Pick something to eat! Enter number:" << endl;
cout << "1: " << food[0] << endl;
cout << "2: " << food[1] << endl;
cout << "3: " << food[2] << endl;
int choice3;
cin >> choice3;

cout << endl << "Today was such a nice so I decided to go to the " << place[choice1 - 1] << "." << endl;
cout << "After walking around for a bit, I sat on a " << sit[choice2 - 1] << " for a break" << "." << endl;
cout << "I felt hungry so I ate a " << food[choice3 - 1] << ". It was delicous!" << endl;
cout << "I watched the sun set and went home after a day at the " << place[choice1 - 1] << "." << endl;
cout << "What a great day!" << endl;
cout << "The end!" << endl;

}