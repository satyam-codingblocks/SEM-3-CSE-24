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

class Cat : public Animal {
public:
    void meow() {
        cout << "I can meow!" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.eat();  // Inherited from Animal
    d.bark(); // Own method
    c.eat();  // Inherited from Animal
    c.meow(); // Own method
    return 0;
}
