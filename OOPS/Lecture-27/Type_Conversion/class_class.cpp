#include <iostream>

class ClassA {
    int value;
public:
    ClassA(int v) : value(v) {}
    int getValue() const { return value; }
};

class ClassB {
    int value;
public:
    ClassB(const ClassA& a) : value(a.getValue()) {} // Conversion constructor
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    ClassA a(10);
    ClassB b = a; // Conversion from ClassA to ClassB
    b.display();
    return 0;
}
