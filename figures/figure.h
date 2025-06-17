#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure {
public:
    virtual ~Figure() = default;

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void printInfo() const = 0;
    virtual void scale(double factor) = 0;
};

#endif // FIGURE_H