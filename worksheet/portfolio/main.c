
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0,0);
    printf("(%f, %f)\n", p1.x, p1.y);
    Point p2 = makePoint(4,0);
    printf("(%f, %f)\n", p2.x, p2.y);
    Point p3 = makePoint(0,3);
    printf("(%f, %f)\n", p3.x, p3.y);

    Line l1 = makeLine(p1, p2);
    printf("%f\n", lineLength(l1));

    Triangle t1 = makeTriangle(p1, p2, p3);
    printf("%f\n", triangleArea(t1));

    printf("%d\n", samePoint(p1,p1));
    
    printf("%d\n", pointInTriangle(makePoint(4,0), t1));
    
    
    
    

    return 0;
}