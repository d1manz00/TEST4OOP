#ifndef UNTITLED2_REAL_H
#define UNTITLED2_REAL_H


#include "Number.h"

class Real : public Number {
private:
    double x, y;
public:
   /* void add (double a, double b);
    void div1 (double a, double b);
    void sub (double a, double b);
    void mul (double a, double b);*/
    void add ();
    void div1 ();
    void sub ();
    void mul ();
    void set ();
};


#endif //REAL_H
