#include <PLayer.h>

#ifndef DUNGEON_H
#define DUNGEON_H

class Dungeon
{
    public:
        Player player;
        Room rooms[4];

        Dungeon(Player);

        int runDungeion();//sadrzi glavni loop 1 win 0 lose

        void enterRoom (Room *);//specificna soba
        void handleEmptyRoom (Room *);
        void handleRoomWithChest(Room *);
        void handleRoomWithEnemy(Room *);
        void handleLootActions(Room *);
        void handleFightActions(Room *);
        void handleMovementActions(Room *);
        void printActions(int,string[]);
        int perfomEndGameLogic();
};
#endif
/*
Once the header is included, it checks if a unique value (in this case DUNGEON_H) is defined. Then if it's not defined, it defines it and continues to the rest of the page.

When the code is included again, the first ifndef fails, resulting in a blank file.

That prevents double declaration of any identifiers such as types, enums and static variables.
*/