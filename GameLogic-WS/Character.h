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
    ~Character();
  
    int GetHealth();
    void Damage(int amount);
    string GetName();
};
