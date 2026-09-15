#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}


void deleteBeginning(Node*& head) {
    Node* temp = head;
    head = head->next;
    delete temp;
}


void deleteEnd(Node*& head) {
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}


void deletePosition(Node*& head, int pos) {
    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }
    Node* p = temp->next;
    temp->next = p->next;
    delete p;
}

int main() {
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};
    Node* fourth = new Node{40, NULL};
    Node* fifth = new Node{50, NULL};
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    cout << "Original List: ";
    display(head);
    deleteBeginning(head);
    cout << "\nAfter deleting beginning: ";
    display(head);
    deleteEnd(head);
    cout << "\nAfter deleting end: ";
    display(head);
    deletePosition(head, 2);
    cout << "\nAfter deleting position 2: ";
    display(head);

    return 0;
}