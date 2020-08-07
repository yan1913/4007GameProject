#include "OutputPage.h"
#include "headList.h"
#include <conio.h>
#include <cstdio>
#include <windows.h>
OutputPage::OutputPage()
{
    //ctor
}

void OutputPage::Welcome()//Welcome page
{
    printf("\n\n          4007CEM Game Project");
    printf("\n\n           Producer:Yan Liao");
    printf("\n\n           Student ID:9947609");
    printf("\n\n           Date:06/08/2020");
    printf("\n\n        Please press any key to start!");
    getch();
    system("cls");
}

void OutputPage::Introduction()
{
    printf("\n\n                    INTRODUCTION");
    printf("\n There is a maze game will be displayed next.");
    printf("\n Your location will be indicated by the symbol ¡®O¡¯.");
    printf("\n You need to control the movement of the character by ¡®W, A, S, D¡¯");
    printf("\n  moving from the initial position to ¡®D¡¯ to open the door to the second floor");
    printf("\n Before that, you need to defeat monster ¡®M¡¯ and obtain the key to open the door. ");
    printf("¡®@¡¯ is 10 gold coins.Please remember to pick up gold coins.You will use them in the store.");

    printf("\n Please press any key to continue.");

    getch();
    system("cls");
}




OutputPage::~OutputPage()
{
    //dtor
}
