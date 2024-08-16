#include <bits/stdc++.h>
using namespace std;

//Polymorphism (ability to take more than one form - fun is function written in many forms).
class Geeks
{
    public:
    void fun(int a)
    {
        cout << "value of a is " << a << endl;
    }
    void fun(double a)
    {
        cout << "value of a is " << a << endl;
    }
    void fun(int a, int b)
    {
        cout << "The value of a and b is " << a << " , " << b << endl;
    }
};
  int main() 
{
    Geeks obj1;
    obj1.fun(10);
    obj1.fun(6.324);
    obj1.fun(90 , 24);
    return 0;
} 