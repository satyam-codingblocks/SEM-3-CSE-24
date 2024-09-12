#include<iostream>
using namespace std;

void wavePrint(int a[][4], int n, int m){
        for(int col =0; col < m; col++){
        if(col % 2 == 0){
            for(int row = 0 ; row < n ; row++){
                cout<<a[row][col]<<" ";
            }
        }
        else 
        {
             for(int row = n-1 ; row >= 0 ; row--){
                cout<<a[row][col]<<" ";
            }

        }
    

    }
}

int main()
{
    int a[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    int n = 3,m =4;
        
    
   wavePrint(a, n , m);
   return 0;

}
