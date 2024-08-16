#include <bits/stdc++.h>
using namespace std;

// two classes have a relationship with each other, and objects of one class acquire properties and features of the other class

//Parent Class
class Parent
{
  public:
    int id_Parent;
};
  
  // Child class (Child class is inherited class so it can access id_Parent also)
class Child: public Parent
{
  public:
    int id_Child;
};
int main()
{
    Child obj1;
    obj1.id_Child = 10;
    obj1.id_Parent = 63;
    cout << "Child id is: " << obj1.id_Child << '\n';
    cout << "Parent id is: " << obj1.id_Parent << '\n';
    return 0;
}