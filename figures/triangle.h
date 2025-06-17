#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure {
public:
    Triangle(double side1, double side2, double side3);

    double area() const override;
    double perimeter() const override;
    void printInfo() const override;
    void scale(double factor) override;

private:
    double side1_;
    double side2_;
    double side3_;

    bool isValidTriangle() const;
};

#endif // TRIANGLE_H