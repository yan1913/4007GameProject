#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include <iostream>
using namespace std;
class PlayerInfo
{
    public:
        PlayerInfo();
        virtual ~PlayerInfo();


        string userName;
        int hp; //Health point
        int atk; //Attack point
        int pdef; //Project value
        int exp; //
        int gold; //Gold Coin

        void printUserInfo();
        void keyboardControl(char);


    protected:

    private:
};

#endif // PLAYERINFO_H
