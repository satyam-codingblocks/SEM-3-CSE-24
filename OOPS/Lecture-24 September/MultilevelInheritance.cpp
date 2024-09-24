#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "I can weep!" << endl;
    }
};

int main() {
    Puppy p;
    p.eat();  // Inherited from Animal
    p.bark(); // Inherited from Dog
    p.weep(); // Own method
    return 0;
}
