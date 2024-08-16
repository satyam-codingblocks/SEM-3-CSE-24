#include<iostream>
using namespace std;

class test {
    int a; int b;
    public:
    static int count; //static members shares common memory across all objects.
    
    test(int x , int y){
        a = x; 
        b = y;
        count++;
    }
    void print()
    {
        cout<<a<<" "<<b<<" "<<count<<endl;
    }
    // static function takes only static data members
       static int getCount()
    {
        return count;
    }
};
int test :: count = 0;
int main()
{
    test t1(10,20);
    test t2(10,15);
    test t3(0,0);
   
    t1.print();t2.print();
    cout<<t3.getCount()<<" "<<test :: getCount()<< endl;
}