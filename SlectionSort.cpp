#include <iostream>
using namespace std;

void display(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}


int main() {
    int n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    display(A, n);
    selectionSort(A, n);
    cout << "Sorted using Selection Sort: ";
    
    return 0;
}