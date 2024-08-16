#include<iostream>
using namespace std;
class Point{
   
    int x ;
    int y;
public:
    Point(int a=0 , int b=0){
        x = a;
         y = b;
    }
    void display(){
        cout<<"x "<<x<<"y "<<y<<endl;
    }
    Point operator-()
    {
        return Point(-x,-y);
    }
};
int main(){
    Point p1(1,2),p2;
    p1.display();
    p2.display();
    Point p3 = -p1;
    p3.display();
    return 0;
   
}

