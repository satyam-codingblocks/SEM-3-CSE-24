#include <iostream>
using namespace std;
class construct
{
public:
int a, b;
// Default Constructor
construct()
{
cout<<"called"<<endl;
}
};
int main()
{
// Default constructor called automatically
// when the object is created
construct c;
return 1;
}