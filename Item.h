
#include <string>

using namespace std;

#ifndef ITEM_H
#define ITEM_H
class Item
{
    public:
    string name;
    int health,attack,defence;

    Item(string,int,int,int);

};
#endif