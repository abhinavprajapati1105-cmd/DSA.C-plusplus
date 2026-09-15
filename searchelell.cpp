#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = nullptr;
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    Node* temp = head;
    int position = 1;
    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Element found at position: "<<position;
            return 0;
        }
        temp = temp->next;
        position++;
    }
    cout << "Element not found.";
    return 0;
}