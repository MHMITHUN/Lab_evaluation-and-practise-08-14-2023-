#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
    Shape() {}
    virtual ~Shape() {}
    friend void calculateArea(const Shape& shape);

private:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

private:
    double radius;

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double length, double width) : length(length), width(width) {}

private:
    double length, width;

    double calculateArea() const override {
        return length * width;
    }
};

class Triangle : public Shape {
public:
    Triangle(double base, double height) : base(base), height(height) {}

private:
    double base, height;

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

void calculateArea(const Shape& shape) {
    cout << "Area of the shape: " << shape.calculateArea() <<endl;
}

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 8.0);

    calculateArea(circle);
    calculateArea(rectangle);
    calculateArea(triangle);

    return 0;
}
