#include <iostream>
#include <string>

#include "Character.h"
using namespace std;

int main(void){
  Character c = Character("BOB");
  cout<< c.GetName()<< " ; " << c.GetHealth();
  cin.get();
  
  return 0;
}
