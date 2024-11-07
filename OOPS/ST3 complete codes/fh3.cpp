#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
 vector<int>arr(5);
 cout<<"Enter the input: ";
 for(int i=0;i<5;i++)
 cin>>arr[i];

 ofstream fout;
 fout.open("zero.txt");
fout<<"Origional data\n";

 for(int i=0;i<5;i++)
 {
    fout<<arr[i]<<" ";

 }
fout<<"\n Sorted data\n";

sort(arr.begin(),arr.end());

for(int i=0;i<5;i++)
 {
    fout<<arr[i]<<" ";

 }
 fout.close();

} 