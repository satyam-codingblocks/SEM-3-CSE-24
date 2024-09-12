#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    long long int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]> 0){
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}

