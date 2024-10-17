#include <iostream>

class A {
public:
    void display() {
        std::cout << "Class A" << std::endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C { // Diamond problem
};

int main() {
    D obj;
    // obj.display(); // Error: Ambiguity
    return 0;
}
