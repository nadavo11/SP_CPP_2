//
// Created by pc user on 12/19/2021.
//

#ifndef SP_CPP_2_COMPLEXVEC_H
#define SP_CPP_2_COMPLEXVEC_H
/***************************************     INCLUDES      ******************************************************/
#include "ComplexVec.h"
#include "Complex.h"
#include <iostream>
#include <vector>
using namespace std;

class ComplexVec {
    vector<Complex> Vector;

public:
    void printElements();
    void insert(const Complex& x);

    ComplexVec();

    Complex& operator [] (int) ;

    bool isValid(int);
};


#endif //SP_CPP_2_COMPLEXVEC_H
