#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    MyClass* obj = new MyClass();
    obj->display();
    delete obj;
    return 0;
}
