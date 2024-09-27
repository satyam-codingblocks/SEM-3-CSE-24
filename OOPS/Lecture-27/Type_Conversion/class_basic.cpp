#include <iostream>
using namespace std;

class Integer {
    int value;
public:
    Integer(int v)  {
        value = v;
    }
    operator int() { // Conversion operator
        return value;
    }
};

int main() {
    Integer obj = 5;
    int x = obj; // Implicit conversion from Integer to int
    cout << "Value: " << x << endl;
    return 0;
}
