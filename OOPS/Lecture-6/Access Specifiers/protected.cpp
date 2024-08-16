#include <bits/stdc++.h>
using namespace std;
 
// base class
class Database{  
    // protected data members
    protected:
    int marks;
};
 
// sub class or derived class from public base class
class student : public Database
{
    public:
    void setMarks(int m)
    {
        marks = m;    
    }
     
    void displayMarks()
    {
        cout << "Marks = " << marks << endl;
    }
};
 


// main function
int main() {
  
    student obj1;
    obj1.setMarks(81);
    obj1.displayMarks();


}
