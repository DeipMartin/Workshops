#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include "Character.h"

class Player :public Character{
  public: 
    Player();
    Player(string n);
    ~Player();
}
