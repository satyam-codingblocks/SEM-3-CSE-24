#include <iostream>
using namespace std;
int findSmallestElement(int arr[][100], int rows, int cols) {
    int smallest = arr[0][0];
 
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        	if (arr[i][j] < smallest)
            	smallest = arr[i][j];
 
    return smallest;
}
int main() {
    int rows, cols;
    cin >> rows >> cols;
    int arr[100][100];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        	cin >> arr[i][j];
 
    int smallest = findSmallestElement(arr, rows, cols);
    cout << smallest << endl;
 
    return 0;
}