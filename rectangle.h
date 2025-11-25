#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct {
    double length;
    double breadth;
} Rectangle;

void rect_init(Rectangle *r, double length, double breadth);
double rect_area(const Rectangle *r);

#endif
