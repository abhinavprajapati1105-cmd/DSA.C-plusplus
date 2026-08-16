#include <iostream>
#include<cstdio>
using namespace std;

void spiralmatrix(int A[20][20], int rows, int cols) {
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << A[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << A[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << A[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << A[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int A[20][20];
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Print in Spiral form: ";
    spiralmatrix(A, rows, cols);
    return 0;
}