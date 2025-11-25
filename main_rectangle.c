#include <stdio.h>
#include "rectangle.h"

int main() {
    Rectangle r;
    rect_init(&r, 6.0, 3.0);

    printf("Area = %.2f\n", rect_area(&r));
    return 0;
}
