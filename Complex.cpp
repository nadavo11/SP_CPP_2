//
// Created by pc user on 12/18/2021.
//



/*****************************      includes    ***********************************************/
#include "Menu.h"
#include "Complex.h"
#include <iostream>

using namespace std;
/********************************** ALIASES ************************************/ // TODO Add aliases

/********************************** PROTOTYPES ***********************************************/

/**____________________________________________________________________________________________/
/*******************************    CLASS Menu  ***********************************************/
/**____________________________________________________________________________________________/
/*******************************    METHODS  ***********************************************/

float Complex::getPhase() const {
    return 0;
}
/** INPUT : -no input
 * OUTPUT: the complex modulus (radius) -float*/
float Complex::getRad() const{
    return 0;
}


void Complex::setReal(float real) {
    this->re = real;
}

void Complex::setImaginary(float imag) {
    this->im = imag;
}

float Complex::getReal() const {
    return re;
}
float Complex::getImaginary() const {
    return im;
}

/***********************************   Ctors    ********************************************/

/**default Ctor: (0 args) : the complex zero
 * 1 arg Ctor : a real number (magnitude as in input)
 * 2 args Ctor : (real , imaginary)*/

Complex::Complex(float real, float imag) {
    this->re =real;
    this->im = imag;
}

Complex::~Complex() {

}

ostream &operator<<(ostream &os, const Complex &clx) {
    os << clx.re << " + " << clx.im << 'i' ;
    return os;
}


/********************************** HELPER FUNCTIONS *********************************/