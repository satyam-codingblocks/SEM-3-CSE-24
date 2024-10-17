#include<iostream>
using namespace std;

class Point{
    int x;
    public:
    Point(int x1){
        x = x1;
    }
    void display()
    {
        cout<<"value of x :"<<x;
    }
    operator int()
    {
        return x;
    }

};
int main()
{
    Point p1 = 10;
    int x = p1;


    p1.display();
    return 0;
}