#include<iostream>
#include<cstdio>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* head=new Node;
    Node* second=new Node;
    Node* third=new Node;

    head->data=50;
    head->next=second;
    second->data=60;
    second->next=third;
    third->data=90;
    third->next=nullptr;
       Node* temp = head;
    cout << "Linked List:";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}