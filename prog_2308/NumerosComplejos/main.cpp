#include <iostream>
#include "Complejo.h"
using namespace std;

int main()
{
    Complejo x(3,6);
    Complejo y(1,8);
    Complejo z = x.Suma(y);
    z.print();

    return 0;
}
