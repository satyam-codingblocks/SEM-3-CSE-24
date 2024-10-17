#include <iostream>
using namespace std;

class ClassA {
    int value;
public:
    ClassA(int v){
        value = v;
    }
    int getValue(){
         return value;
    }
    
};

class ClassB {
    int value;
public:
    ClassB( ClassA& a) {
        value=a.getValue();
    }  // Conversion constructor
    void display() {
       cout << "Value: " << value <<endl;
    }
};

int main() {
    ClassA a(10);
    ClassB b = a; // Conversion from ClassA to ClassB
    b.display();
    return 0;
}
