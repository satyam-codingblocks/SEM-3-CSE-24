// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test2;
class test{
    private:
    int a;
    public:
    test(int x){
        a = x;
    }
    friend void sum(test, test2);
};

class test2{
    private:
    int b;
    
    public:
    test2(int y){
        b = y;
    }
    friend void sum(test, test2);
};

//common friend of two classes
void sum(test t1, test2 t2){
    cout<<t1.a + t2.b<<endl;
}

int main() {
    
test t1(10);

test2 t2(15);

sum(t1, t2);
    return 0;
}