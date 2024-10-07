#include <iostream>
using namespace std;

void spiralTraversal(int mat[][100], int m, int n) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
   while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++)
      cout<< (mat[top][i]) << " ";

    top++;

    for (int i = top; i <= bottom; i++)
      cout<< (mat[i][right]) << " ";

    right--;

    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       cout<< (mat[bottom][i])<< " ";

      bottom--;
    }

    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        cout<< (mat[i][left])<< " ";

      left++;
    }
  }
}

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[100][100];  
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    spiralTraversal(matrix, m, n);
    return 0;
} 
