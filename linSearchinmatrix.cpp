
#include<iostream>
#include<cstdio>
using namespace std;

void Inputnum(int A[10][20], int rows, int colms) {
    cout << "\nEnter Elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
            cin >> A[i][j];
        }
    }
}

void Displaynum(int A[10][20], int rows, int colms) {
    cout << "\nShowing Elements in matrix form:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

bool linSearch(int A[10][20], int rows, int colms, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
            if (A[i][j] == key) {
               
                return true;
            }
        }
    }
    return false;
}

int main() {
    int  rows, colms, key;
    int A[10][20];

    cout << "Enter the no of rows:";
    cin >> rows;
    cout << "Enter the no of colms:";
    cin >> colms;
    Inputnum(A, rows, colms);
    Displaynum(A, rows, colms);

    cout << "Enter the key element:";
    cin >> key;
    if (linSearch(A, rows, colms, key)) {
        cout << "Element is found ";
    } else {
        cout << "Element is not found";
    }

    return 0;
}