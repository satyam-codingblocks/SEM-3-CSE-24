#include <iostream>

int main() {
    int var = 10;
    int* ptr = &var; // Pointer to var
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
    return 0;
}
