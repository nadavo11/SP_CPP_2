//
// Created by pc user on 12/18/2021.
//



/*******************************    CLASS Menu  ***********************************************/


/*******************************    HEADERS   ***********************************************/
#include <cmath>
#include "iostream"
#include "ComplexVector.h"
#include "Complex.h"
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

/*******************************    private  methods  ***********************************************/
    static void getClx1Clx2 (Complex &clx1,Complex &clx2, ComplexVector &V);
    static void getClx (Complex &clx, ComplexVector &V);

/*******************************    public  methods  ***********************************************/
public:

    void mainMenu();


/*******************************    Constructors  ***********************************************/
    Menu();
};



#endif //SP_CPP_2_MENU_H
