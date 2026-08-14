
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

int transposematrix(int A[10][20], int rows, int colms) {
    int T[20][10];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
          T[j][i]=A[i][j];
        }
    }
    cout<<"Transpose matrix:\n";
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
         cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
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
    transposematrix(A,rows,colms);
    return 0;
}