#include<iostream>
using namespace std;


class student{
    private:
        int marks;
     public:
        int getPercentage(int m)
        {
            marks=m;
            return (marks*100)/100;
        }
};


int main(){
   
   student student1;
   cout<<"Percentage = "<<student1.getPercentage(92)<<endl;
}

// marks is private accessible only inside the class.