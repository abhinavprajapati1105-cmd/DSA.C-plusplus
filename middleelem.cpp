#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
int main() {
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
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle element: " << slow->data;
    return 0;
}