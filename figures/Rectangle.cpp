#include "rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(double side1, double side2)
    : side1_(side1), side2_(side2) {
    if (side1_ < 0 || side2_ < 0) {
        throw std::invalid_argument("Side have to be positive");
    }
}

double Rectangle::area() const {
    return side1_ * side2_;
}

double Rectangle::perimeter() const {
    return side1_ * 2 + side2_ * 2;
}

void Rectangle::printInfo() const {
    std::cout << "Sides: " << side1_ << ", " << side2_ << std::endl;
}

void Rectangle::scale(double factor) {
    if (factor <= 0) {
        throw std::invalid_argument("Scale factor must be positive");
    }
    side1_ *= factor;
    side2_ *= factor;
}