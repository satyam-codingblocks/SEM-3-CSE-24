#include<iostream>
using namespace std;

class test{
    public:
    int a;
    private:
    int b;
    protected:
    int c;
    
    // by declaring friend we can access the protected and private members of class outside
    
    friend void func();
    
};
void func()
{
    test t1;
    t1.a = 10;
    t1.b=20;
    t1.c=30;
    
    cout<<t1.a<<" "<<t1.b<<" "<<t1.c<<endl;
}
int main()
{
    func();
    return 0;
}