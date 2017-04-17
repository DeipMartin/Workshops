#include "Character.h"
Character::Character(){
  this->helth = 100;
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
