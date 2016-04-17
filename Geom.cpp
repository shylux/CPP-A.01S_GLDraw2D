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
void CPoint::print() {
    cout << "CPoint[ X=" << this->x << " Y=" << this->y << " ]" << endl;
}


CLine::CLine(CPoint *p1, CPoint *p2) {
    this->set(p1, p2);
}
void CLine::set(CPoint* p1, CPoint* p2) {
    this->p1 = *p1;
    this->p2 = *p2;
}
void CLine::print() {
    cout << "CLine[" << endl << "\t";
    this->p1.print();
    cout << "\t";
    this->p2.print();
    cout << "]" << endl;
}

CRectangle::CRectangle(CPoint *p1, CPoint *p2) {
    this->set(p1, p2);
}
void CRectangle::set(CPoint* p1, CPoint* p2) {
    this->p1 = *p1;
    this->p2 = *p2;
}
void CRectangle::print() {
    cout << "CRectangle[" << endl << "\t";
    this->p1.print();
    cout << "\t";
    this->p2.print();
    cout << "]" << endl;
}

CCircle::CCircle(CPoint *p, float rad) {
    this->set(p, rad);
}
void CCircle::set(CPoint *p, float rad) {
    this->point = *p;
    this->radius = rad;
}
void CCircle::print() {
    cout << "CCircle[\n\t";
    this->point.print();
    cout << "\tradius=" << this->radius << "\n]" << endl;
}
