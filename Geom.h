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

    CPoint(float x, float y);
    void set(float x, float y);
    void list();
};

class CLine {
public:
    CPoint p1, p2;

    void set(CPoint* p1, CPoint* p2);
    void list();
};

class CRectangle;
class CCircle;