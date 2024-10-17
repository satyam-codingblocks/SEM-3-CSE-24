#include <iostream>

class Base {
public:
    void display() { // Early binding
        std::cout << "Base class" << std::endl;
    }
    virtual void show() { // Late binding
        std::cout << "Base class show" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class" << std::endl;
    }
    void show() override {
        std::cout << "Derived class show" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->display(); // Early binding
    ptr->show(); // Late binding
    delete ptr;
    return 0;
}
