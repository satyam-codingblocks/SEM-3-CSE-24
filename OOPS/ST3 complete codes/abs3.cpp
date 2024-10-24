#include <iostream>
using namespace std;
// Abstract class
class Shape {
public:
    virtual double area() = 0;
   
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r){
        radius = r;
    }

    double area()  {
        return 3.14 * radius * radius;
    }

  
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    } 
    double area()  {
        return length * width;
    }
};

int main() {

    Circle c(5);
    Rectangle r(4, 6);

    Shape s1;


    

    return 0;
}