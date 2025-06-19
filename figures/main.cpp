#include "figure.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"

int main() {
	Triangle t(2, 3, 4);
	Circle c(5.5);
	Rectangle r(6.3, 2.8);

	std::cout << "This is Triangle" << std::endl;
	t.printInfo();
	std::cout << "Triangle area: " << t.area() << std::endl;
	std::cout << "Triangle perimeter: " << t.perimeter() << std::endl;
	t.scale(2);
	std::cout << "Triangle has been scaled. New dimensions: " << std::endl;
	t.printInfo();

	std::cout << "This is Circle" << std::endl;
	c.printInfo();
	std::cout << "Circle area: " << c.area() << std::endl;
	std::cout << "Circle perimeter: " << c.perimeter() << std::endl;
	c.scale(3);
	std::cout << "Circle has been scaled. New dimensions: " << std::endl;
	c.printInfo();

	std::cout << "This is Rectangle" << std::endl;
	r.printInfo();
	std::cout << "Rectangle area: " << r.area() << std::endl;
	std::cout << "Rectangle perimeter: " << r.perimeter() << std::endl;
	r.scale(4);
	std::cout << "Rectangle has been scaled. New dimensions: " << std::endl;
	r.printInfo();
}