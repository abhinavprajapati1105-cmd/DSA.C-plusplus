#include <iostream>
#include<cstdio>
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
    
    Node* prev = nullptr;
    Node* current = head;

        Node* temp=nullptr;
    Node* head=nullptr;
    int n,value;
 cout<<"Enter the number of nodes:";
 cin>>n;
 for(int i=0;i<n;i++){
    cout<<"Enter the value:";
    cin>>value;
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=nullptr;
    if(head==nullptr){
      head=newNode;
      temp=head;
    }else{
        temp->next=newNode;
        temp=temp->next;
    }
 }



    while (current != nullptr) {
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}