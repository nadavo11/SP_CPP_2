//
// Created by pc user on 12/18/2021.
//


/*******************************    CLASS Menu  ***********************************************/


/*******************************    HEADERS   ***********************************************/
#include <cmath>
#include "iostream"
using namespace std;
#ifndef SP_CPP_2_COMPLEX_H
#define SP_CPP_2_COMPLEX_H

/********************************************************************************************/
class Complex{

//default constructor override
/*******************************    private fields  ***********************************************/
    float re;
    float im;
/*******************************    public  methods  ***********************************************/
public:

    float  getRad() const;
    float  getPhase() const;
    float getReal() const;
    float  getImaginary() const;
    void setReal(float real);
    void setImaginary(float imag);


/*******************************    Constructors  ***********************************************/
    explicit Complex(float real = 0, float imag = 0);
/*******************************    OPERATORS OVERLOADING  ***********************************************/

    Complex  operator ~ () const{
        Complex conj(this->im, - this->re);
        return conj;
    }

    /** overloading + operator.
       * calculation will be held by
       * componentwise addition
       * complex sum:
       *
       * a+c +i(b+d)
       * -----------------------------------
       * operator will NOT effect any of operands
       * output : Z+Q
       * */
    Complex operator + (Complex const &clx) const {
        Complex sum;
        sum.setReal(re + clx.re);
        sum.setImaginary(im+clx.im);
        return sum;
    }

    /** overloading - operator.
    * calculation will be held by
    * addition f negative number:
    *
    * Z - Q = Z + - Q
    * -----------------------------------
    * operator will NOT effect any of operands
    * output : Z - Q*/
    Complex operator - (Complex const &clx) const {
        return Complex(re - clx.re, im - clx.im);
    }
    /** overloading - operator.
     * calculation will be held by de morgan's
     * complex conjugte method:
     *
     * Z/Q = Z* ~Q /R^2
     * -----------------------------------
     * operator will NOT effect any of operands
     * output : Z/Q*/
    Complex operator * (Complex const &clx) const {
        return Complex(re*clx.re - im*clx.im, im*clx.re + re*clx.im);
    }
/** overloading / operator.
     * calculation will be held by de morgan's
     * complex conjugte method:
     *
     * Z/Q = Z* ~Q /R^2
     * -----------------------------------
     * operator will NOT effect any of operands
     * output : Z/Q*/
    Complex operator / (Complex clx) const {
        float R =clx.getRad();
        Complex temp;
        temp =  *this*~clx;
        return Complex(temp.re/(R*R),temp.im/(R*R));
    }

    /** overloading == operator.
     * inequality in any of the complex object
     * fields will cause false in operator
     * output*/

    bool operator == (Complex clx) const {
        if(re  != clx.re)
            return false;
        if(im != clx.im)
            return false;
        return true;

    }
    friend ostream &operator<<(ostream &os, const Complex &complex);

    /** Dtor */
    virtual ~Complex();



};


#endif //SP_CPP_2_COMPLEX_H