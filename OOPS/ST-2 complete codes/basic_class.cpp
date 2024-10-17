#include <iostream>
using namespace std;

class Integer {
    int value;
public:
    Integer(int v){
      value = v;
    }  // Constructor for conversion
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Integer obj = 5;
     // Implicit conversion from int to Integer

    //  int y = obj;
    obj.display();
    return 0;
}
