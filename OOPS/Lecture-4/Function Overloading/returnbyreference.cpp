// C++ program to illustrate return 
// by reference 
#include <iostream> 
using namespace std; 

// Global variable 
int x; 

// Function returns as a return 
// by reference 
int& retByRef() 
{ 
	return x; 
} 

// Driver Code 
int main() 
{ 
	// Function Call for return 
	// by reference 
	retByRef() = 10; 

	// Print X 
	cout << x; 
	return 0; 
} 


