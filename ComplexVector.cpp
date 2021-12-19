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
#include "ComplexVector.h"
#include "Complex.h"
#include <iostream>
#include "vector"

using namespace std;
/***********************************   Ctors    ********************************************/

/**default Ctor: (0 args) : the complex zero
 * 1 arg Ctor : a real number (magnitude as in input)
 * 2 args Ctor : (real , imaginary)*/

ComplexVector::ComplexVector(){
    this->Vector = vector<Complex> ();
}

void ComplexVector::printElements() {
    for(auto & i : this->Vector)
        cout<<i<<"\n";
}

void ComplexVector::insert(const Complex& x) {
    Vector.push_back(x);
}
bool ComplexVector:: isValid(int i){
    if (this->Vector.size() < i)
        return false;
    return true;
}
Complex &ComplexVector::operator[](int i) {

    return this->Vector[i];
}


