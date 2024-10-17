#include<iostream>
using namespace std;
class Rectangle
{ int width,length,area;
 public:
  Rectangle(int w,int l)
  { width=w; length=l; area=width*length;
  }
  void output()
  { cout<<"\nLength : "<<length<<"\nWidth : "<<width<<"\nArea of rectangle : "<<area;
  }
};
class Triangle
{ int base,height;
 float area;
 public:
  Triangle(int b,int h)
  { base =b; height=h;  area=0.5*base*height;
  }
  void print()
  { cout<<"\nBase : "<<base<<"\nHeight : "<<height<<"\nArea of triangle : "<<area;
  }
  operator Rectangle()
  { Rectangle temp(base,height);
   return temp;
  }
};


int main()
{ Triangle t(10,20);
 Rectangle r=t;//Triangle to Rectangle
 t.print();
 r.output();
 return 0;
}