#include <iostream>
using namespace std;


//  First name space
namespace NinjaSpace1{
    void Function(){
     cout << "Inside NinjaSpace1" << endl;
    }

  // second name space
  namespace NinjaSpace2{
    void Function(){
       cout << "Inside NinjaSpace2" << endl;
   }
 }

}

using namespace NinjaSpace1;

int main () {

// Calling the function from NinjaSpace1
Function();

// Calling the function from NinjaSpace2
NinjaSpace1::NinjaSpace2::Function();

return 0;
}

/*
we have used the line: using namespace NinjaSpace1; which instructs the compiler
 we are using the methods defined within the Ninjaspace1.
 Moving on, the line, NinjaSpace1::NinjaSpace2::Function();
  instructs the compiler that we are calling the function defined within NinjaSpace2;


*/