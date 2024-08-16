// C++ program to demonstrate that data members can be
// updated in a member function that is not constant.

#include <iostream>
using namespace std;

class Demo {
	int x;

public:
	void set_data(int a) { x = a; }

	// non const member function
	// data can be updated
	int get_data()
	{
		++x;
		return x;
	}
};

main()
{
	Demo d;
	d.set_data(10);
	cout << d.get_data();

	return 0;
}
