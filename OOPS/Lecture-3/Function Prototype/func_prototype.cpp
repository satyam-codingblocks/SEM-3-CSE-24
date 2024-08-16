#include<iostream>
using namespace std;
// function prototype
void multiply(int, int);
int main() {
    // calling the function before declaration.
    multiply(10, 20);
    return 0;
}
// defining function
void multiply(int x, int y) {
    cout << (x * y);
}