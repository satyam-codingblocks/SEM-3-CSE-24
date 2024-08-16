#include <iostream>
using namespace std;

// Function prototype - Specify the default arguments here
int fun1(int = 1, int = 2, int = 3);
int fun2(int, int, int = 3);

int main() {
  cout << fun1(4, 5, 6) << endl; // No default
  cout << fun1(4, 5) << endl;    // 4, 5, 3(default)
  cout << fun1(4) << endl;       // 4, 2(default), 3(default)
  cout << fun1() << endl;        // 1(default), 2(default), 3(default)

  cout << fun2(4, 5, 6) << endl; // No default
  cout << fun2(4, 5) << endl;    // 4, 5, 3(default)
  // cout << fun2(4) << endl;
  // error: too few arguments to function 'int fun2(int, int, int)'
}

int fun1(int n1, int n2, int n3) {
  // cannot repeat default arguments in function definition
  return n1 + n2 + n3;
}

int fun2(int n1, int n2, int n3) {
  return n1 + n2 + n3;
}