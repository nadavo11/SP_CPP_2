//
// Created by pc user on 12/19/2021.
//
/********************************************* COMPLEX VECTOR CLASS ********************************************
 *                                                                                                              *
 *                                                                                                              *
 *                             this class will hold multiple complex numbers.                                   *
 *                                                                                                              *
 *                                                                                                              *
 *                                                                                                              *
 ****************************************************************************************************************/
/***************************************     INCLUDES      ******************************************************/
#include "ComplexVec.h"
#include "Complex.h"
#include <iostream>
#include "vector"

using namespace std;
/***********************************   Ctors    ********************************************/

/**default Ctor: (0 args) : the complex zero
 * 1 arg Ctor : a real number (magnitude as in input)
 * 2 args Ctor : (real , imaginary)*/

ComplexVec::ComplexVec(){
    this->Vector = vector<Complex> ();
}

void ComplexVec::printElements() {
    for(auto & i : this->Vector)
        cout<<i<<"\n";
}

void ComplexVec::insert(const Complex& x) {
    Vector.push_back(x);
}
bool ComplexVec:: isValid(int i){
    if (this->Vector.size() < i)
        return false;
    return true;
}
Complex &ComplexVec::operator[](int i) {

    return this->Vector[i];
}


