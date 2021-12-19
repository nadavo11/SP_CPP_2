//
// Created by pc user on 12/18/2021.
//
/*****************************      includes    ***********************************************/
#include "Menu.h"
#include "Complex.h"
#include "ComplexVec.h"
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
    ComplexVec V;
    int chs;
    int Q = 1;

    float re;
    float im;
    int i;

    Complex clx1;
    Complex clx2;

    while (Q) {
        std::cout <<MAIN_MESSEGE;

        cin >> chs ;
        switch (chs) {
            case 1:
                cout<<"please insert complex number:\n";
                cout<<"real\n";
                cin >> re;

                cout<<"imaginary:\n";
                cin >> im;

                V.insert(Complex(re , im));
                break;

            case 2:
                V.printElements();
                break;

            case 3:
                getClx1Clx2(clx1,clx2,V);

                cout<<"("<<clx1<<") + (" <<clx2<<") is "<<clx1+clx2<<"\n";
                break;

            case 4:

                getClx1Clx2(clx1,clx2,V);
                cout<<"("<<clx1<<") - (" <<clx2<<") is "<<clx1 - clx2<<"\n";
                break;



                break;
            case 5:

                getClx1Clx2(clx1,clx2,V);
                cout<<"("<<clx1<<") / (" <<clx2<<") is "<<clx1 / clx2<<"\n";
                break;

            case 6:

                getClx1Clx2(clx1,clx2,V);
                cout<<"("<<clx1<<") * (" <<clx2<<") is "<<clx1 * clx2<<"\n";
                break;

            case 7:
                getClx(clx1,V);
                cout<<"The conjugate of "<<clx1<< " is " <<~clx1<<"\n";
                break;

            case 8:
                getClx(clx1,V);
                cout<<"phase(degree): "<<  clx1.getPhase()<<" radius: "<<clx1.getRad()<<"\n";
                break;

            case 9:
                Q = 0;
                cout <<"Goodbye!" ;
                break;
            default:
                cout << ILLEGAL;

        }
    }
}


/********************************** HELPER FUNCTIONS *********************************/
void Menu::getClx1Clx2(Complex &clx1, Complex &clx2, ComplexVec &V) {
    int i;
    cout<<"index range start from 1; i.e., 1,2,3....\n";
    cout<<"insert index of first number:\n";
    cin >> i;
    while(!V.isValid(i)){
        cout<<"not in range, try again\n";
        cin >> i;
    }
    clx1 = V[i-1];

    cout<<"insert index of second number\n:";
    cin >> i;
    while(!V.isValid(i)){
        cout<<"not in range, try again\n";
        cin >> i;
    }
    clx2 = V[i-1];
}

void Menu::getClx(Complex &clx, ComplexVec &V) {
    int i;
    cout<<"index range start from 1; i.e., 1,2,3....\n";
    cout<<"insert index of complex number:\n";
    cin >> i;
    while(!V.isValid(i)){
        cout<<"not in range, try again\n";
        cin >> i;
    }
    clx = V[i-1];

}
