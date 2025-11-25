#include "rectangle.h"

void rect_init(Rectangle *r, double length, double breadth) {
    r->length = length;
    r->breadth = breadth;
}

double rect_area(const Rectangle *r) {
    return r->length * r->breadth;
}
