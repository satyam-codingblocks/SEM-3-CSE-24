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
        p = new int(10);
        
    }
    /*
    A(A &obj){
        cout<<"copy constructor"<<endl;

    }
*/
}; 
int main()
{
    A obj1;
    A obj2(obj1);

    cout<<"obj1.x="<<obj1.x<<endl;
    cout<<"obj1.p="<<*(obj1.p)<<endl;
    cout<<"obj2.x="<<obj2.x<<endl;
    cout<<"obj2.p="<<*(obj2.p)<<endl;

    obj1.x = 15;
    *(obj1.p) = 30;

    cout<<"after changing values in obj 1"<<endl;
    
    cout<<"obj1.x="<<obj1.x<<endl;
    cout<<"obj1.p="<<*(obj1.p)<<endl;
    cout<<"obj2.x="<<obj2.x<<endl;
    cout<<"obj2.p="<<*(obj2.p)<<endl;

    return 0;
}