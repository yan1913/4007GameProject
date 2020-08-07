#include <cstdio>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <array>
#include <PlayerInfo.h>
#include "headList.h"

using namespace std;
char a[50][50]={"############",
				"#O#@@@ #   #",
				"#   ## # # #",
				"#####    # #",
				"#@    #### #",
				"#@##### M# #",
				"#@  @@@@## D",
				"############"};

void Hide()//Used to hide the console cursor
{
	HANDLE				hOut;
	CONSOLE_CURSOR_INFO	curInfo;

	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	curInfo.dwSize=1;
	curInfo.bVisible=0;
	SetConsoleCursorInfo(hOut,&curInfo);
}



void Set()//Set the cursor to the initial position
{
	HANDLE hOut;
	COORD pos={0,0};
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut,pos);
}

int main()
{
    Monster monster1;
    Monster monster2;
    Monster monster3;
    monster1.name = "M1";
    monster1.hp = 50;
    monster1.atk = 200;
    monster1.gold = 20;
    monster1.exp = 200;
    monster2.name = "M2";
    monster2.hp = 30;
    monster2.atk = 30;
    monster2.gold = 20;
    monster2.exp = 200;
    monster3.name = "M3";
    monster3.hp = 40;
    monster3.atk = 40;
    monster3.gold = 50;
    monster3.exp = 500;
    OutputPage outputpage;
	Hide();
	outputpage.Welcome();
	outputpage.Introduction();
    PlayerInfo playerInfo;
	playerInfo.printUserInfo();
    getch();

	system("cls");
	int x=1,y=1;
	char ch;
	int status=-1;

	for(int i=0;i<=7;i++)
		puts(a[i]);


	while(1)
	{
		ch=getch();
        if(ch=='s')//Down
        {
			if(a[x+1][y]!='#')
            {
				a[x][y]=' ';
                x++;
                if(a[x][y]=='@'){
                    playerInfo.gold+=100;
                }

                a[x][y]='O';
            }
        }
        else if(ch=='w')//Up
        {
			if(a[x-1][y]!='#')
            {
				a[x][y]=' ';
                x--;
                if(a[x][y]=='@'){
                    playerInfo.gold+=100;
                }


                a[x][y]='O';
            }
        }
		else if(ch=='a')//Left
        {
			if(a[x][y-1]!='#')
            {
				a[x][y]=' ';
                y--;
                if(a[x][y]=='@'){
                    playerInfo.gold=playerInfo.gold+100;
                }
                a[x][y]='O';

            }
        }
        else if(ch=='d')//Right
        {
			if(a[x][y+1]!='#')
            {
				a[x][y]=' ';
                y++;
                if(a[x][y]=='@'){
                    playerInfo.gold=playerInfo.gold+100;
                }
                if(a[x][y]=='M'){
                    printf("\nYou encountered a monster, do you want to attack it?(y/s)");
                    char temp=getch();
                    if(temp=='y'){
                            if(playerInfo.atk<monster1.atk){
                                printf("Your attack power is too weak to defeat the monster. Do you need to buy potions from the store to increase the attack value by 500? This will cost you 200 gold coins.(y/s)");
                                char temp2=getch();
                                if(temp2=='y'){
                                    playerInfo.atk+=500;
                                    playerInfo.gold-=200;
                                    printf("Congratulations on defeating the monster!");
                                }
                            }else{
                                printf("\n Unfortunately, you will not get the key to open the gate.");
                            }
                        playerInfo.exp+=monster1.exp;
                        printf("\n Congratulations, your exp value has increased by ¡®200¡¯");
                        playerInfo.gold+=monster1.gold;
                        printf("\n Congratulations, your gold coin has increased by ¡®20¡¯");
                        playerInfo.hp-=monster1.atk;
                        printf("\n Unfortunately, your hp is reduced by ¡®30¡¯");
                        printf("\n Congratulations! You defeated the monster and got the key to open the gate!");
                        status=1;
                        continue;
                    }else{
                        printf("\n Unfortunately, you will not get the key to open the gate.");
                        continue;
                    }
                }
                a[x][y]='O';
            }
        }
        Set();
		for(int i=0;i<=7;i++)
			puts(a[i]);

        playerInfo.printUserInfo();

        if(x==6 && y==11){
            if(status>0){
                break;
            }else{
                printf("\n Sorry, you don¡¯t have the key to open this door.");
                continue;
            }
        }

	}
	system("cls");
	printf("\n\n                        Congratulations!  ");
	printf("\n\n            You got the key and successfully opened the door!");
	printf("\n\n                       You cleared the level!");
	Sleep(10000);
	return 0;
}











