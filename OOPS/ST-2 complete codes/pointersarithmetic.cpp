#include <iostream>

int main() {
    int arr[] = {10, 20, 30};
    int* ptr = arr;
    std::cout << "First element: " << *ptr << std::endl;
    ptr++;
    std::cout << "Second element: " << *ptr << std::endl;
    return 0;
}
