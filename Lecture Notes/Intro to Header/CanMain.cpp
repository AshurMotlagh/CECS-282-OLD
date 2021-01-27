#include <iostream>
#include "Can.h"

using namespace std;
int main()
{
    /*
     * This is all Java code
     Can c1; (this is a reference in JAva)
     c1 = new Can() (This is a constructor, we now have one can)
     c1 =  new Can("Coke",12)
     */

    Can c1; // in C++ this is a constructor, we now have one can
    Can c2("Venom", 16);
    c1.display();
    cout << endl;
    c2.display();
    return 0;
}
