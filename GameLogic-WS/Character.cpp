#include "Character.h"
Character::Character(){
  this->helth = 100;
}
CHaracter::Character(string n){
   this->health= 100;
   this->name = n;
}

Character::~Character(){
}

int Character::GetHealth(){
  return this->health;
}

void Character::Damage(int amount){
  this->health->amount;
}

string Character::GetName(){
  return this->name;
}

void Character::SetName(string n){
  this->name = n ;
}
