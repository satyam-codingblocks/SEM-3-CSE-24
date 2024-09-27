#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void walk() {
        cout << "I can walk!" << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "I can fly!" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void nocturnal() {
        cout << "I am nocturnal!" << endl;
    }
};

int main() {
    Bat b;
    b.eat();       // Inherited from Animal
    b.walk();      // Inherited from Mammal
    b.fly();       // Inherited from Bird
    b.nocturnal(); // Own method
    return 0;
}
