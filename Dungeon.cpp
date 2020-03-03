#include "Dungeon.h"
#include "Player.h"
#include <iostream>
using namespace std;


 Dungeon::Dungeon(Player p){
     player=p;
 };


int Dungeon:: runDungeion(){
    cout << "Welcome to the dungeon! Inside you will find treasuer and also enemies!";
    player.currentRoom = &rooms[0];//adresa prve sobe
    player.previousRoom= &rooms[0];
    while(true){
        //enter room
        //present actions
        //take action = enter sequence
        //check if dead
        //movement options
    }
}
 void Dungeon:: enterRoom (Room *){

 };



        //int runDungeion();//sadrzi glavni loop 1 win 0 lose
        void enterRoom (Room *);//specificna soba
        void handleEmptyRoom (Room *);
        void handleRoomWithChest(Room *);
        void handleRoomWithEnemy(Room *);
        void handleLootActions(Room *);
        void handleFightActions(Room *);
        void handleMovementActions(Room *);
        void printActions(int,string[]);
        int perfomEndGameLogic();