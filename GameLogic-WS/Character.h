#ifndef CHARACTER_H
#define CHARACTER_H
#endif

#pragma once

#include <iostream>
#include <string>

class Character{
  private:
    int health;
    string name;
  
  public:
    Character();
    Character(string n);
    ~Character();
  
    int GetHealth();
    void Damage(int amount);
    string GetName();
    void SetName(string n);
};
