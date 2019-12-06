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
   Real ();
    void add () override;
    void div1 () override;
    void sub () override;
    void mul () override;
    void set () override;
};


#endif //REAL_H
