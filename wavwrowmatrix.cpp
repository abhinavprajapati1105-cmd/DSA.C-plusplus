#include<iostream>
#include<cstdio>
using namespace std;
void waverowmatrix(int A[20][20], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                cout << A[i][j] << " ";
            }
        }else {
            for (int j = cols - 1; j >= 0; j--) {
                cout << A[i][j] << " ";
            }
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
    cout << "Row-wise wave: ";
    waverowmatrix(A, rows, cols);
    return 0;
}