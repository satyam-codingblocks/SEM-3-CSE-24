#include<iostream>
using namespace std;

class student{
   public:
        int marks;

        int getPercentage()
        {
            return (marks*100)/100;
        }
};

int main(){
   
   student student1;
   student1.marks=92;
   cout<<"Percentage = "<<student1.getPercentage()<<endl;
}

// marks is a public access specifier accessible from everywhere inside the code
