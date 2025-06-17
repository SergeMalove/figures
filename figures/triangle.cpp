#include "triangle.h"
#include <stdexcept>
#include <cmath>
#include <string>

Triangle::Triangle(double side1, double side2, double side3)
    : side1_(side1), side2_(side2), side3_(side3) {
    if (!isValidTriangle()) {
        throw std::invalid_argument("Invalid triangle sides");
    }
}

double Triangle::area() const {
    // Формула Герона
    double p = perimeter() / 2;
    return sqrt(p * (p - side1_) * (p - side2_) * (p - side3_));
}

double Triangle::perimeter() const {
    return side1_ + side2_ + side3_;
}

void Triangle::printInfo() const {
    std::cout << "Sides: " << side1_ << ", " << side2_ << ", " << side3_ << std::endl;
}

void Triangle::scale(double factor) {
    if (factor <= 0) {
        throw std::invalid_argument("Scale factor must be positive");
    }
    side1_ *= factor;
    side2_ *= factor;
    side3_ *= factor;
}

bool Triangle::isValidTriangle() const {
    return (side1_ > 0 && side2_ > 0 && side3_ > 0) &&
        (side1_ + side2_ > side3_) &&
        (side1_ + side3_ > side2_) &&
        (side2_ + side3_ > side1_);
}