#include "PlayerInfo.h"
#include <conio.h>
#include <cstdio>
#include <windows.h>

PlayerInfo::PlayerInfo()
{
    cout<<"Enter your name please:"<<endl;
    cin>>userName;
    hp=220; //Health point
    atk=100; //attack point
    pdef=50; //protect value
    exp=0; //Exp
    gold=0; //Gold coin
    //ctor

}


void PlayerInfo::printUserInfo()
{
    cout<<"User Information List:"<<endl;
    cout<<"UserName: "<<userName<<endl;
    cout<<"Hp: "<<hp<<endl;
    cout<<"AtkValue: "<<atk<<endl;
    cout<<"Exp: "<<exp<<endl;
    cout<<"Gold: "<<gold<<endl;
}






PlayerInfo::~PlayerInfo()
{
    //dtor
}
