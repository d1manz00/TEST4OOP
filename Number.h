#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
using namespace std;

class Number {
protected:
   /* int a, b;
    double c, d;*/
public:
    virtual void add () = 0;
    virtual void div1 () = 0;
    virtual void sub () = 0;
    virtual void mul () = 0;
    virtual void set() = 0;
   // friend istream & operator >> (istream & is, Number & ob);
};
#endif //NUMBER_H