
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new = {.x = x, .y = y};

    return new;
}

Line makeLine( Point p1, Point p2 )
{
    Line new = {{p1, p2}};
    return new;
}
Triangle makeTriangle( Point p1, Point p2, Point p3 )
{
    Triangle new = {{p1, p2, p3}};
    return new;
    
}


float lineLength( Line l )
{
    float x1 = l.p[0].x;
    float y1 = l.p[0].y;
    float x2 = l.p[1].x;
    float y2 = l.p[1].y;
    float length = sqrt((pow(x1-x2, 2))+pow(y1-y2, 2));
    return length;
}

float triangleArea( Triangle t )
{
    float x1 = t.p[0].x;
    float y1 = t.p[0].y;
    float x2 = t.p[1].x;
    float y2 = t.p[1].y;
    float x3 = t.p[2].x;
    float y3 = t.p[2].y;

    float area = 0.5 * (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    if (area >= 0)
    {
        return area;
    }
    else
    {
        return area*-1;
    }
}  



bool samePoint( Point p1, Point p2 )
{
    if (fabs(p1.x-p2.x) >1.0e-6)
    {
        return false;
    }
    if (fabs(p1.y-p2.y) >1.0e-6)
    {
        return false;
    }
    return true;
}   
bool pointInLine( Point p, Line l)
{
    for (int i = 0; i < 2; i++)
    {
        if (samePoint(l.p[i], p) == true)
        {
            return true;
        }
    }

    return false;
}           // return true only if the point is one of the line endpoints
bool pointInTriangle( Point p, Triangle t )
{
    for (int i = 0; i < 3; i++)
    {
        if (samePoint(t.p[i], p) == true)
        {
            return true;
        }
    }

    return false;
} // return true only if the point is one of the triangle vertices


// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
