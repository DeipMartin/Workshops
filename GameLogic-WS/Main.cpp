#include <iostream>
#include <string>

#include "Player.h"
using namespace std;

int main(void){
  Player c = Player("BOB");
  cout<< c.GetName()<< " ; " << c.GetHealth();
  cin.get();
  
  return 0;
}
