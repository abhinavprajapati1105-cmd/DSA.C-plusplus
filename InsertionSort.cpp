#include <iostream>
using namespace std;

// Function to display array
void display(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
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

  
    cout << "\n Insertion Sort";

            insertionSort(A, n);
            cout << "Sorted using Insertion Sort: ";

    display(A, n);

    return 0;
}