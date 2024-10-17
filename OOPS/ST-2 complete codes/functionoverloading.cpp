#include <iostream>

class MyClass {
public:
    void display(int x) {
        std::cout << "Integer: " << x << std::endl;
    }
    void display(double x) {
        std::cout << "Double: " << x << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.display(10);
    obj.display(10.5);
    return 0;
}
