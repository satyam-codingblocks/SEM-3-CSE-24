#include<iostream>
using namespace std;

class test{
    int a;
    public:
    test(int x){
        a = x;
    }

    //my can access the private and protected members of class test
    friend class my;
};

class my{
    int b;
    public:
    my(int y){
        b = y;
    }
    void sum(test  obj){
        cout<<obj.a+b<<endl;
    }
};
int main()
{
    test t1(10);
    my t2(15);
    t2.sum(t1);
    return 0;
}