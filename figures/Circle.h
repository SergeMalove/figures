#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure {
public:
    Circle(double radius);

    double area() const override;
    double perimeter() const override;
    void printInfo() const override;
    void scale(double factor) override;

private:
    double radius_;
};

#endif // CIRCLE_H