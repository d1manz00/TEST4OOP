#include "Real.h"
#include <iostream>

using namespace std;

void Real::set()
{
    cout << "Enter first and second number as real: ";
    cin >> x >> y;
    cout << endl << "Thanks" <<endl;
}

void Real::add ()
{
    cout << "add a + b = " << x + y <<endl;
}

void Real::div1 ()
{
    if (y != 0)
    {
        cout << "div a / b = " << x / y <<endl;
    }
}

void Real::sub ()
{
    cout << "sub a - b = " << x - y <<endl;
}

void Real::mul ()
{
    cout << "mul a * b = " << x * y <<endl;
}
Real::Real()
{
    x = 1.0;
    y = 1.0;
}