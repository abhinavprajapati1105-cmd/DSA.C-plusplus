#include <iostream>
using namespace std;

void display(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
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
    cout << "\n2. Bubble Sort";
   
        bubbleSort(A, n);
        cout << "Sorted using Bubble Sort: ";
    display(A, n);

    return 0;
}