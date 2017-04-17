#ifndef CHARACTER_H
#define CHARACTER_H

#pragma once

#include <iostream>
#include <string>

class Character{
  private:
    int health;
  public:
    Character();
    ~Character();
    int GetHealth();
}
