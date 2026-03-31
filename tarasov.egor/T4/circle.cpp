#include <string>
#include "point.h"
#include "circle.h"

Circle::Circle(const Point& center, double radius) :
    center_(center),
    radius_(radius)
{
    if (radius < 0) {
        throw std::invalid_argument("Circle: invalid radius\n");
    }
}

double Circle::getArea() const {
    return (3.1415 * radius_ * radius_);
}
Point Circle::getCenter() const {
    return center_;
}
std::string Circle::getName() const {
    return "CIRCLE";
}
void Circle::move(double a, double b) {
    center_ = Point(center_.x + a, center_.y + b);
}
void Circle::scale(double c) {
    if (c <= 0) {
        return;
    }
    radius_ = radius_ * c;
}
