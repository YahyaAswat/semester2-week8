
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    Point p = {1,0};
    Rectangle r = makeRectangle(p, 1, 1);
    printf("%f\n", area(r));
    Point p2 = {2,2};
    shiftRectangle(&r, p2);
    printf("X: %f\nY: %f\n", r.p.x, r.p.y);
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r = {.p=p, .width=width, .height=height};

    return r;
}

float area( Rectangle r ) {
    float a = r.width * r.height;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {

    r->p.x = r->p.x + dp.x;
    r->p.y = r->p.y + dp.y;
    return;
}

void scaleRectangle( Rectangle *r, float scale ) {

    return;
}
