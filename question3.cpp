#include <iostream>

#include <cmath>

using namespace std;

const double PI = 3.14159;
class Shape {
  public:
    // create a Virtual member function to calculate the area
    virtual double calculateArea() const = 0;

  // Virtual member function to calculate the perimeter
  virtual double calculatePerimeter() const = 0;
};

class Circle: public Shape {
  private: double radius;

  public:
    // Constructor
    Circle(double rad): radius(rad) {}

  // Override the virtual member function to calculate the area
  double calculateArea() const override {
    return PI * pow(radius, 2);
  }

  // Override the virtual member function to calculate the perimeter
  double calculatePerimeter() const override {
    return 2 * PI * radius;
  }
};

class Rectangle: public Shape {
  private: double length;
  double width;

  public:
    // Constructor
    Rectangle(double len, double wid): length(len),
  width(wid) {}

  // Override the virtual member function to calculate the area
  double calculateArea() const override {
    return length * width;
  }

  // Override the virtual member function to calculate the perimeter
  double calculatePerimeter() const override {
    return 2 * (length + width);
  }
};

class Triangle: public Shape {
  private: double side1;
  double side2;
  double side3;

  public:
    // Constructor
    Triangle(double s1, double s2, double s3): side1(s1),
  side2(s2),
  side3(s3) {}

  // Override the virtual member function to calculate the area
  double calculateArea() const override {
    // Using Heron's formula to calculate the area of a triangle
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
  }

  // Override the virtual member function to calculate the perimeter
  double calculatePerimeter() const override {
    return side1 + side2 + side3;
  }
};

int main() {
  // Create instances of different shapes
  // Can accept user inputs.
  Circle circle(5.0);
  Rectangle rectangle(12.5, 6.4);
  Triangle triangle(4.0, 5.4, 3.3);

  // Calculate and display the area and perimeter of each shape
    cout << "Circle: " <<   endl;
    cout << "Area: " << circle.calculateArea() <<   endl;
    cout << "Perimeter: " << circle.calculatePerimeter() <<   endl;

    cout << "\nRectangle: " <<   endl;
    cout << "Area: " << rectangle.calculateArea() <<   endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() <<   endl;

    cout << "\nTriangle: " <<   endl;
    cout << "Area: " << triangle.calculateArea() <<   endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() <<   endl;

  return 0;
}