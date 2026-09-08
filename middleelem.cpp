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
    Node* low = head;
    Node* high = head;
    while (high != nullptr && high->next != nullptr) {
        low = low->next;
        high = high->next->next;
    }
    cout << "Middle element: " << low->data;
    return 0;
}