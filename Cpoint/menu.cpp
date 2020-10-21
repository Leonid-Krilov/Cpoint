#include <iostream>
#include"Cpoint.h"

using namespace std;

void menu()
{
    Cpoint a;
    Cpoint b(0, 0);

    a.InputXY();

    auto res = a.hline();
    cout << res;

    double grad;
    const double Pi = 3.14;
    cout << "\nInput grad-> ";
    cin >> grad;

    auto c = a.turnrad(grad / (180 / Pi));
    cout << c.getx() << "/" << c.gety() << endl;
}