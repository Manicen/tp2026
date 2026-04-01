#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include "Point.h"
#include <memory>

class Rectangle:public Shape{
public:
Rectangle(constPoint&p1,constPoint&p2);

doublegetArea()constoverride;
PointgetCenter()constoverride;
voidmove(doubledx,doubledy)override;
voidscale(doublefactor)override;
std::stringgetName()constoverride;
std::unique_ptr<Shape>clone()constoverride;

private:
PointbottomLeft_;
PointtopRight_;
};

#endif
