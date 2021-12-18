//
// Created by pc user on 12/19/2021.
//

#ifndef SP_CPP_2_COMPLEXVECTOR_H
#define SP_CPP_2_COMPLEXVECTOR_H
/***************************************     INCLUDES      ******************************************************/
#include "ComplexVector.h"
#include "Complex.h"
#include <iostream>
#include <vector>
using namespace std;

class ComplexVector {
    vector<Complex> Vector;

public:
    void printElements();
    void insert(const Complex& x);

    ComplexVector();

    Complex& operator [] (int) ;
};


#endif //SP_CPP_2_COMPLEXVECTOR_H
