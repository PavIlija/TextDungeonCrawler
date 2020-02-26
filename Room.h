#include <vector>
#include "Item.h"
#include "GameCharacter.h"

#ifndef ROOM_H
#define ROOM_H
class Room
{
    public:
    int pos;
    bool isExit;
    vector<Item> items;
    vector <GameCharacter> enemies;
    Room(int,bool,vector<Item>,vector<GameCharacter>);
    void clearLoot();
    void clearEnemies();

};

#endif