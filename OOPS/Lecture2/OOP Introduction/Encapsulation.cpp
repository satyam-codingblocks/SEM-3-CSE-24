#include<iostream>
using namespace std;
// wrapping up of Data and Information under a single unit
class Encapsulation
{
    private:
        int a;     
    public:
        void set(int x)
        {
            a =x;
        }
        int get()
        {
            return a;
        }
};
int main()
{
    Encapsulation obj;
    obj.set(10); 
    cout<<obj.get();
    return 0;
}