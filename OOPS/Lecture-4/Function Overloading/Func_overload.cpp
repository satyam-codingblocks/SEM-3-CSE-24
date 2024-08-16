#include<iostream>  
using namespace std;  

// function with (int,int) parameters
void multiply(int a, int b) {
  cout << "a * b = "<<a*b<<endl;
}

// function with (double,double) parameters
void multiply(double a, double b) {
  cout << "a * b = "<<a*b<<endl;
}

// function with (int,double) parameters
void multiply(int a, double b) {
  cout << "a * b = "<<a*b<<endl;
}

// function with (double,int) parameters
void multiply(double a, int b) {
  cout << "a * b = "<<a*b<<endl;
}

int main() {
  multiply(5, 10);
  multiply(1.2,0.5);
  multiply(3,0.4);
  multiply(0.5, 3);
  return 0;
}

// four multiply() functions. All four have different types of data types in a different order.
// The multiply() function gets overloaded in this case because of different parameter types.