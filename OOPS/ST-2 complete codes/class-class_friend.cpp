#include <iostream>
using namespace std;

// Forward declaration of ClassB
class ClassB;

class ClassA {
private:
    int valueA;

public:
    ClassA(int val) {
        valueA = val;
    } 

    // Friend function declaration
    friend ClassB convertToClassB( ClassA& objA);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val) {
        valueB=val;
    }

    void display() {
        cout << "Value in ClassB: " << valueB << endl;
    }
};

// Friend function definition
ClassB convertToClassB(const ClassA& objA) {
    return ClassB(objA.valueA);
}

int main() {
    ClassA objA(10);
    ClassB objB = convertToClassB(objA);
    objB.display();

    return 0;
}
