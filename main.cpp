#include "Player.h"
#include <iostream>
using namespace std;

int main() {

  Player* p1 = new Player("Terry Rozier",  "Charlotte Hornets");
  Player* p2 = new Player("Chris Paul", "Pheniox Suns");
  Player* p3 = new Player("Cole Anthony", "Orlando Magic");
  Player* p4 = new Player("John Stockton", "Utah Jazz");
  Player* p5 = new Player("Bradely Beal", "Washington Wizards");

  Player players[5] = {p1, p2, p3, p4, p5};

  cout << "Welcome to the NBA Player Quiz!!!" << endl;

  bool win = true;
  for (int i = 0; i < 5; i++) {
    cout << "What team is the player " + players[i].getName() + " on";
    string response;
    cin >> response;
    if (response != players[i].getTeam()) {
      cout << "Incorrect!!! the correct answer is: " + players[i].getTeam()
           << endl
           << endl;
      break;
    }
    cout << "Correct!!! Nice job!" << endl << endl;
  }
  if (win) {
    cout << "You Won!! Good stuff :D" << endl << endl;
  }
  cout << "You lost D:" << endl << endl;
}
