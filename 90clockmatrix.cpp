
#include<iostream>
#include<cstdio>
using namespace std;

void Inputnum(int A[10][20], int n) {
    cout << "\nEnter Elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
}

void Displaynum(int A[10][20], int n) {
    cout << "\nShowing Elements in matrix form:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int rotateClockwise(int A[10][20], int n) {
    int T[10][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            T[i][j] = A[n - 1 - j][i];
        }
    }

    cout << "90 Degree Clockwise Rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    int  n;
    int A[10][20];
    cout << "Enter the value of n:";
    cin>>n;
    Inputnum(A,n);
    Displaynum(A,n);
    rotateClockwise(A,n);
    return 0;
}