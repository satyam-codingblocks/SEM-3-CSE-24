#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

class Employee
{
  protected:
  int Emp_id;
};

class Salary : public Employee
{
  float Amt;
  public:
  void get_data( int e, float s )
  {
    Emp_id = e;
    Amt = s;
  }
  void show_salary ( )
  {
    cout<<"Salary of Employee id "<<Emp_id<< " is Rs. "<<Amt;
  }
};

int main()
{
  Salary s1;
  s1.get_data(234, 20000);
  s1.show_salary();
  return 0;
}