#include <iostream>

void display(int x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    void (*funcPtr)(int) = display; // Pointer to function
    funcPtr(10);
    return 0;
}
