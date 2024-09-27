#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base { // Single inheritance
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}
