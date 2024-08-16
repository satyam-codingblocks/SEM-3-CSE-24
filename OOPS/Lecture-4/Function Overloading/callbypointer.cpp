#include <iostream>
using namespace std;

// A function we want to point to
void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    // Creating a function pointer named 'funcPtr' pointing to 'greet'
    void (*funcPtr)() = greet;

    // Using the function pointer to call 'greet'
    funcPtr();

    return 0;
}

/*

funcPtr is a pointer to the function greet, which doesn't take any parameters &
 doesn't return anything (void). By setting funcPtr to greet, we can call greet() just by using funcPtr().
  It's like having a shortcut to call the function.


*/