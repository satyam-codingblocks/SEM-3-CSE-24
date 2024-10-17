#include <iostream>

int main() {
    int* ptr = new int(10); // Dynamic allocation
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr; // Deallocate memory
    return 0;
}
