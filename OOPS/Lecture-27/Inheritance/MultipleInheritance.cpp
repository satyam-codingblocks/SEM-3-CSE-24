#include <iostream>
using namespace std;

class Mammal {
public:
    Mammal() {
        cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
public:
    WingedAnimal() {
        cout << "Winged animals can fly." << endl;
    }
};

class Bat : public Mammal, public WingedAnimal {
public:
    Bat() {
        cout << "Bats are mammals and can fly." << endl;
    }
};

int main() {
    Bat b;
    return 0;
}
