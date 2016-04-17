//
// Created by Lukas Knöpfel on 15.04.16.
//

#ifndef CPPA_01S_GLDRAW2D_GEOM_H
#define CPPA_01S_GLDRAW2D_GEOM_H

#endif //CPPA_01S_GLDRAW2D_GEOM_H

class CPoint {
public:
    float x;
    float y;

    CPoint() {};
    CPoint(float x, float y);
    void set(float x, float y);
    void print();
};

class CLine {
public:
    CPoint p1, p2;

    CLine(CPoint *pPoint, CPoint *pCPoint);
    void set(CPoint* p1, CPoint* p2);
    void print();
};

class CRectangle {
public:
    CPoint p1, p2;

    CRectangle(CPoint *pPoint, CPoint *pCPoint);
    void set(CPoint* p1, CPoint* p2);
    void print();
};

class CCircle {
public:
    CPoint point;
    float radius;

    CCircle(CPoint *p, float rad);
    void set(CPoint* p, float rad);
    void print();
};
