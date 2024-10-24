#include<iostream>
using namespace std;
class Base {
 public:
   Base ()
   {
    cout << "Base Class::Constructor "<<endl;;
   }
   virtual~Base() {
     cout << "Base Class::Destructor "<<endl;;
   }
};
class Derived: public Base {
 public:
 Derived() {
    cout << " Derived class::Constructor "<<endl;;
   }
   ~Derived() {
    cout << " Derived class::Destructor "<<endl;
   }
};
int main() {
 Base * b = new Derived; // Upcasting
 delete b;

// Derived d1;
// return 0;
}