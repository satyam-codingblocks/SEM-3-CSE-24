#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Address of this object: " << this << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
