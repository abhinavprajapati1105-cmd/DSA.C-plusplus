
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(){
        data = 0;
        next = nullptr;
    }
    Node(int d, Node* n){
        data = d;
        next =n;
    }
};

int main() {
    Node* head = new Node(10, nullptr);
    head->next = new Node(20, nullptr);
    head->next->next = new Node(30, nullptr);
    head->next->next->next = new Node(40, nullptr);
    head->next->next->next->next = new Node(50, nullptr);

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}