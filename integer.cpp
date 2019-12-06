#include "integer.h"
#include <iostream>
using namespace std;

void integer::set ()
{
    cout << "Enter first and second number as integer: ";
    cin >> x >> y;
    cout << endl << "Thanks" <<endl;
}

void integer::add ()
{
    cout << "add a + b = " << x + y <<endl;
}
void integer::div1 ()
{
    if (y != 0)
    {
        cout << "div a / b = " << x / y <<endl;
    }
}
void integer::sub ()
{
    cout << "sub a - b = " << x - y <<endl;
}
void integer::mul ()
{
    cout << "mul a * b = " << x * y <<endl;
}

integer::integer ()
{
    x = 1;
    y = 1;
}