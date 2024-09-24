#include<iostream>
using namespace std;
class Number
{ int n;
 public:
 void printDetails(){ 
    cout <<n; 
     }
 Number(int n1){ 
    n = n1;
    }
};
int main()
{ 
    Number numb=100;
     numb.printDetails();
 return 0;
}