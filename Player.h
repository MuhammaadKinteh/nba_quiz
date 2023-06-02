#include <iostream>

using namespace std;

class Player {

  friend ostream &operator<<(ostream &Out, Player &);

public:
  Player(string name, string team);

  string getName();
  string getTeam();

  void setName(string Name);
  void setTeam(string Team);

private:
  string name;
  string team;
};