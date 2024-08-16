#include <iostream>
using namespace std;
void swap(int &x, int &y) 
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
Call by reference method copies the address of an argument into the formal parameter. In this method, 
the address is used to access the real argument used in the function call.
 It means that changes made inside the parameter adjust the passing argument.

In this method, memory allocation is the same as the real parameters. 
All the operations in the function are finished on the value saved at the address of the actual parameter,
 and the modified value could be stored on the same address


*/