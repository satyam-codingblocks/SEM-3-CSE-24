#include<bits/stdc++.h>
using namespace std;

namespace Satyam
{
    int a = 10;
    int geta()
    {
        return a * 10;
    }
 
}
struct node{
    string str;
    int num;
    double d;
    char x;

    node(str1 , num1, d1, x1){
        str = str1;
        num = num1;
        d = d1;
        x = x1;
        
    }
};
int main(){
    double a = 20.0;
    cout<<a<<endl;  //prints 20.0

    cout<<Satyam::geta() <<endl;
    //this prints 10

    //create a datatype where you store
    {string , int , double , char}



   //wrong way 
   node s;
   s.str = "satyam";
   s.num = 79;
   s.d = 91.0;


//right way 
node *s = new node("satyam", 79 , 910 , "");

//we can store anything
{arr[], int double}


//Arrays -> int arr[100];

array<int ,100> arr;
array<int , 3> arr;  //  ->  {?, ?, ?}

array <int , 5 > arr = {1};  //   ->   {1, 0,0,0,0}

int arr[10000] = {0};  

array <int , 5> arr;
arr.fill(0);
arr.fill(5);   //  {10 , 10 , 10, 10 ,10}

arr[i];
arr.at(1);

for(int i = 0 ; i < 5; i++){
    cout<<arr.at(i)<<" ";
}


//iterators
// begin(), end(), rbegin(), rend()

array<int ,5 > arr = {1,4,5,6,7};
for( auto it= arr.begin(); it!= arr.end(); it++){
    cout<<* it<<" ";
}

//what will print

for(auto it= arr.rbegin(); it<arr.rend();it++) {
		cout << *it << " "; 
	}

    for(auto it= arr.end()-1; it >= arr.begin();it--){
        cout<<* it<<" ";
    }

//for each loop
for(auto it : arr)
{
    cout<<it<<" ";


}
// in string
string s = "satyam"

// s a t y a m
for(auto c : s){
    cout<<c<<" ";
}


//size
cout<< arr.size();

//front
cout<<arr.front();

//back
cout<<arr.back();


//VECTOR

int arr[50];

vector<int>arr;  // -> {}
cout<<arr.size() << endl;  // -> print 0
arr.push_back(0);  // {0}
arr.push_back(2);  //{0,2}
cout<<arr.size() << endl;  // -> print 2

arr.pop_back();  //{0}
cout<<arr.size() << endl;  // -> print 1

arr.push_back(0);  // {0,0}
arr.push_back(2);  //{0,0,2} 

arr.clear(); // -->erase all the elements at once  {}

vector<int>arr1(4,0);  // -> {0,0,0,0}

vector<int>arr2(4,10);  // -> {10,10,10,10}.


//copy the entire arr2 into arr3
vector<int> arr3(arr2.begin(),arr2.end());  //-> [)

vector<int>arr3(arr2);


vector<int> satyam;
satyam.push_back(1);  // satyam.emplace_back(1)
satyam.push_back(3);
satyam.push_back(2);
satyam.push_back(5);  //{1,3,2,5} 

vector<int>satyam1(satyam.begin(), satyam.begin()+2); //{1,3}


// lower bound , upper bound 
 
	// swap swap(v1, v2) 
	// begin(), end(), rbegin(), rend() 
 

// to defining 2d vectors 
 
	vector<vector<int>> vec; 
 
	vector<int> satyam1;
	satyam1.push_back(1); 
	satyam1.push_back(2); 
 
	vector<int> satyam2;
	satyam2.push_back(10); 
	satyam2.push_back(20); 
 
	vector<int> satyam3;
	satyam3.push_back(19); 
	satyam3.push_back(24); 
	satyam3.push_back(27); 
 
	vec.push_back(satyam1); 
	vec.push_back(satyam2); 
	vec.push_back(satyam3); 

// it is vector itself 
	for(auto vctr: vec) {
		for(auto it: vctr) {
			cout << it << " "; 
		}
		cout << endl; 
	}
 
 
	for(int i = 0;i<vec.size();i++) {
		for(int j = 0;j<vec[i].size();j++) {
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}
 
 
	// define 10 x 20 
	vector<vector<int>> vec(10, vector<int> (20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints
 
	vec[2].push_back(1); 
 
 
	vector<int> arr[4]; 
	arr[1].push_back(0); 
 
 
	// 10 x 20 x 30 // int arr[10][20][30] 
	vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int> (30, 0));) 


}