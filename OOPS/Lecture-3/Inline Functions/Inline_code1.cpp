#include <iostream>
using namespace std;

inline int max(int a, int b){
    return a>b?a:b;
}

int main()
{
    int a=10, b=20;
    cout<<"maximum of 10 and 20 is "<<max(a,b);
    return 0;
}


// max(a, b) denotes function call and gets replaced by return a>b? a:b.