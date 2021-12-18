//
// Created by pc user on 12/18/2021.
//
/*****************************      includes    ***********************************************/
#include "Menu.h"

#include <iostream>

using namespace std;
/********************************** ALIASES ************************************/ // TODO Add aliases
#define ILLEGAL "illegal choice"                                     // Maximum input length
#define MAIN_MESSEGE "=======================================\n\
<1> add a new complex number\n\
<2> print all numbers\n\
<3> +\n\
<4> -\n\
<5> /\n\
<6> *\n\
<7> polar coordinate\n\
<8> exit\n\
======================================="
/********************************** PROTOTYPES ***********************************************/

/*******************************    CLASS Menu  ***********************************************/
Menu::Menu() {
    this->mainMenu();
}
void Menu:: mainMenu() {
    int chs;
    int Q = 1;
    while (Q) {
        std::cout <<MAIN_MESSEGE;

        cin >> chs ;
        switch (chs) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:
                cout<<"hey";
            case 8:
                Q = 0;
                cout <<"Goodbye!" ;
                break;
            default:
                cout << ILLEGAL;
        }
    }
}
/********************************** HELPER FUNCTIONS *********************************/
