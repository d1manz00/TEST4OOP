#ifndef INTEGER_H
#define INTEGER_H


#include "Number.h"

class integer : public Number {
private:
    int x, y;
public:
    integer ();
    void add () override;
    void div1 () override;
    void sub () override;
    void mul () override;
    void set () override;
};


#endif //INTEGER_H
