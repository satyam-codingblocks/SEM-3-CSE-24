#include<iostream>
using namespace std;

class A
{
    public :
    int x;
    int *p;
    //default constructor
    A()
    {
        x = 5;
        p = new int(5);
        
    }

    //user defined copy constructor
    A(A &obj){
        cout<<"copy constructor"<<endl;
        x= obj.x;
        p = new int ; //allocates memory on the heap 
        *p = *(obj.p); //assigns the value pointed by object to location pointed by the p.

    }

}; 
int main()
{
    A obj1;
    A obj2(obj1);

    cout<<"obj1.x="<<obj1.x<<endl;
    cout<<"obj1.p="<<*(obj1.p)<<endl;
    cout<<"obj2.x="<<obj2.x<<endl;
    cout<<"obj2.p="<<*(obj2.p)<<endl;

    obj1.x = 10;
    *(obj1.p) = 10;
    cout<<"obj1.x="<<obj1.x<<endl;
    cout<<"obj1.p="<<*(obj1.p)<<endl;
    cout<<"obj2.x="<<obj2.x<<endl;
    cout<<"obj2.p="<<*(obj2.p)<<endl;

    return 0;
}