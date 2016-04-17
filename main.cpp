#include <iostream>
#include "Geom.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    CPoint p1 = CPoint(2, 2);
    p1.list();
    p1.set(1, 1);
    p1.list();
    return 0;
}