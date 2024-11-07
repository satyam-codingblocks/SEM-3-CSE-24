#include<iostream>
using namespace std;

class Base{
    public:
    void display()
    {
        cout<<"base"<<endl;
    }
};
class child : public Base{
    public:
    void display()
    {
        Base::display();
        cout<<"child"<<endl;
    }
};
int main()
{
    child c1;
    c1.display();
    return 0;
}