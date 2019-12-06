#include <iostream>
#include "integer.h"
#include "Number.h"
#include "Real.h"

using namespace std;

int main() {
    cout << "hi!" <<endl;
    Number *num;
    while (true)
    {
        int command;
        cout << "Choise number:" << endl << "1)Integer" << endl << "2)Real" <<endl;
        cin >> command;
        switch (command)
        {
            case 1:
            {
                integer obj;
                obj.set();
                cout << "Enter sign:" << endl << "1)+" << endl << "2)-" << endl << "3)*" << endl << "4)/" << endl;
                cin >> command;
                switch (command)
                {
                    case 1:
                    {
                        obj.add();
                        break;
                    }
                    case 2:
                    {
                        obj.sub();
                        break;
                    }
                    case 3:
                    {
                        obj.mul();
                        break;
                    }
                    case 4:
                    {
                        obj.div1();
                        break;
                    }
                    default:
                    {
                        return -1;
                    }
                }
                break;
            }
            case 2:
            {
                Real ob;
                ob.set();
                cout << "Enter sign:" << endl << "1)+" << endl << "2)-" << endl << "3)*" << endl << "4)/" << endl;
                cin >> command;
                switch (command)
                {
                    case 1:
                    {
                        ob.add();
                        break;
                    }
                    case 2:
                    {
                        ob.sub();
                        break;
                    }
                    case 3:
                    {
                        ob.mul();
                        break;
                    }
                    case 4:
                    {
                        ob.div1();
                        break;
                    }
                    default:
                    {
                        return -1;
                    }
                }
                break;
            }
            default:
            {
                return -1;
            }
        }
    }
   /* Real obR;
    integer obI;
    cin >> reinterpret_cast<Number &>(num);
    obR.sub(reinterpret_cast<Number &>(num));
    obI.sub (reinterpret_cast<Number &>(num));*/
    cout << "bye!" <<endl;
    return 0;
}