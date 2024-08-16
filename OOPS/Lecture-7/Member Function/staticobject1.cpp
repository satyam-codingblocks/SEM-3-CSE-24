// C++ program to demonstrate the 
// usage of local static keyword 
#include <iostream> 
class Test { 
public: 
	Test() { std::cout << "Constructor is executed\n"; } 
	~Test() { std::cout << "Destructor is executed\n"; } 
}; 

void myfunc() 
{ 
// local static object declaration 
	static Test obj; 
} 

int main() 
{ 
	std::cout << "main() starts\n"; 
	myfunc(); // calling function with static object 
	std::cout << "main() terminates\n"; 
	return 0; 
}
