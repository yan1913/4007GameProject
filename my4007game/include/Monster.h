#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
using namespace std;
#define MONSTER_NUM 3;
class Monster
{
    public:
        Monster();
        virtual ~Monster();

        string name;
        int hp; //Health point
        int atk; //attack
        int exp; //Exp
        int gold; //Gold Point
    protected:

    private:
};

#endif // MONSTER_H
