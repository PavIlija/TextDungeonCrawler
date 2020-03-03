//Room.h ima sve ostale klase zato ne moramo da ih inkludujemo
#include "Room.h"

#ifndef PLAYER_H
#define PLAYER_H



class Player : public GameCharacter
{
    public:
            Room * currentRoom;
            Room * previousRoom;

            vector<Item> invenotory;

            Player(string ="",int = 0,int=0,int=0);

            void addItem(Item);
            void increaseStats(int,int,int);

            void lootRoom(Room *);

            void changeRooms(Room *);
};

#endif