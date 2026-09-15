
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

Node* MergeLists(Node* head1, Node* head2) {

    Node* random = new Node;
    random->next = nullptr;
    Node* temp = random;

    while (head1 != nullptr && head2 != nullptr) {

        if (head1->data <= head2->data) {
            temp->next = head1;
            head1 = head1->next;
        }
        else {
            temp->next = head2;
            head2 = head2->next;
        }

        temp = temp->next;
    }
    if (head1 != nullptr)
        temp->next = head1;
    else
        temp->next = head2;

    return random->next;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

   
    Node* head1 = new Node{5, nullptr};
    head1->next = new Node{7, nullptr};
    head1->next->next = new Node{9, nullptr};
    Node* head2 = new Node{6, nullptr};
    head2->next = new Node{8, nullptr};
    head2->next->next = new Node{10, nullptr};

    Node* head = MergeLists(head1, head2);

    cout << "Merged List: ";
    printList(head);

    return 0;
}