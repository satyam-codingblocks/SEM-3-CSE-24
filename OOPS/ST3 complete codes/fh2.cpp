#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("zoom.txt");
    char c;
    c= fin.get();
    // fin>>c;


   
    while(!fin.eof()){
        cout<<c;
         c=fin.get();
    } ;
     fin.close(); 
} 