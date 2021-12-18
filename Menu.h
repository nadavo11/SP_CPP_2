//
// Created by pc user on 12/18/2021.
//



/*******************************    CLASS Menu  ***********************************************/


/*******************************    HEADERS   ***********************************************/
#include <cmath>
#include "iostream"
using namespace std;
#ifndef SP_CPP_2_MENU_H
#define SP_CPP_2_MENU_H
/********************************************************************************************/
class Menu{

//default constructor override
/*******************************    private fields  ***********************************************/
    double x1;
    double y1;
    double x2;
    double y2;
/*******************************    public  methods  ***********************************************/
public:

    void mainMenu();

    static void lineMenu();

    void fractionMenu();

    void clockMenu();

/*******************************    Constructors  ***********************************************/
    Menu();
};



#endif //SP_CPP_2_MENU_H
