//
// Created by Lukas Knöpfel on 15.04.16.
//
#include <iostream>
#include "Geom.h"

using namespace std;

CPoint::CPoint(float x, float y) {
    set(x, y);
}
void CPoint::set(float x, float y) {
    this->x = x;
    this->y = y;
}
void CPoint::list() {
    cout << "CPoint[ X=" << this->x << " Y=" << this->y << " ]" << endl;
}

void CLine::set(CPoint* p1, CPoint* p2) {
    this->p1 = *p1;
    this->p2 = *p2;
}
