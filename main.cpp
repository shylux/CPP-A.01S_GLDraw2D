#include <iostream>
#include "Geom.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    CPoint p1 = CPoint(2, 2);
    p1.print();
    p1.set(1, 1);
    p1.print();

    CPoint* p2 = new CPoint(3, 3);
    CLine line = CLine(&p1, p2);
    line.print();

    CRectangle* rect = new CRectangle(&p1, p2);
    rect->print();

    CCircle* circle = new CCircle(p2, 10);
    circle->print();
    return 0;
}