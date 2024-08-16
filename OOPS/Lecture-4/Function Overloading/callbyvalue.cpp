#include <iostream>
using namespace std;
 void swap(int x, int y) 
{
   int temp;
   temp = x;
   x = y;   
   y = temp; 
   return;
}
int main () 
{
   int a = 10;
   int b = 20;
   cout << "Before swap, the value of a :" << a << endl;
   cout << "Before swap, the value of b :" << b << endl;
   swap(a, b);
   cout << "After swap, the value of a :" << a << endl;
   cout << "After swap, the value of b :" << b << endl;
   return 0;
}

/*
In Call by value, the original value isn't permanently changed by using value.

In Call by value, the value being passed to the function is locally stored using
the function parameter in the stack memory location. If you change the value of the
function parameter, it is modified for the current function only. 
It will now not change the variable's value inside the caller method, such as main().


*/