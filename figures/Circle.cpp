#include "circle.h"
#include <iostream>
#include <string>

Circle::Circle(double radius) : radius_(radius) {
    if (radius_ < 0) {
        throw std::invalid_argument("Radius have to be positive");
    }
}

double Circle::area() const {
    return 3.14 * radius_ * radius_;
}

double Circle::perimeter() const {
    return 2 * 3.14 * radius_;
}

void Circle::printInfo() const {
    std::cout << "Circle radius: " << radius_ << std::endl;
}

void Circle::scale(double factor) {
    if (factor <= 0) {
        throw std::invalid_argument("Scale factor must be positive");
    }
    radius_ *= factor;
}