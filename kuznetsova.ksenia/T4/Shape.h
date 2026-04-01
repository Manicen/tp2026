#ifndef SHAPE_H
#define SHAPE_H

#include<memory>
#include<string>
#include"Point.h"

class Shape{
public:
virtual~Shape()=default;

virtualstd::unique_ptr<Shape>clone()const=0;

virtualdoublegetArea()const=0;
virtualPointgetCenter()const=0;
virtualvoidmove(doubledx,doubledy)=0;
virtualvoidscale(doublefactor)=0;
virtualstd::stringgetName()const=0;
};

#endif
