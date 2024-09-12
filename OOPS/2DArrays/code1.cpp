#include<iostream>
using namespace std;

int main()
{
    int arr[][5]= {{1,2,3},{2,4,5},{4,5,6}};
    for(int i = 0 ; i < 4; i++){
        for(int j = 0 ; j < 5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}