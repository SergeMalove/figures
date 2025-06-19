#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
public:
    Rectangle(double side1, double side2);

    double area() const override;
    double perimeter() const override;
    void printInfo() const override;
    void scale(double factor) override;

private:
    double side1_;
    double side2_;
};

#endif // RECTANGLE_H