#include <iostream>

int main() {
    int var = 10;
    int* ptr = &var;
    int** ptr2 = &ptr; // Pointer to a pointer
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
    std::cout << "Value pointed to by ptr2: " << **ptr2 << std::endl;
    return 0;
}
