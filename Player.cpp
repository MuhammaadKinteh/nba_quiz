#include "Player.h"

ostream &operator<<(ostream &Out, Player &player) {
  Out << "Player Name: " + player.getName();
  Out << endl;
  Out << "Team Name: " + player.getTeam();
}

string Player::getName(){
  return name;
}
string Player::getTeam(){
  return team;
}

void Player::setName(string Name){
  this->name = Name;
}

void Player::setTeam(string Team){
  this->team = Team;
}
