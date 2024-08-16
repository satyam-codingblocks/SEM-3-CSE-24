#include <iostream>
using namespace std;
class implementAbstraction
{
    private:
        int x, y;
    public:
        void set(int a, int b)
        {
            x = a;
            y = b;
        }        
        void display()
        {
            cout<<"x = " <<x << endl;
            cout<<"y = " << y << endl;
        }
};  
int main() 
{
    implementAbstraction obj;
    obj.set(40, 50);
    obj.display();
    return 0;
}