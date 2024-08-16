// C++ program to demonstrate a global static keyword 
#include <iostream> 
class Test { 
public: 
	int a; 
	Test() 
	{ 
		a = 10; 
		std::cout << "Constructor is executed\n"; 
	} 
	~Test() { std::cout << "Destructor is executed\n"; } 
}; 
static Test obj; 
int main() 
{ 
	std::cout << "main() starts\n"; 
	std::cout << obj.a; 
	std::cout << "\nmain() terminates\n"; 
	return 0; 
}
