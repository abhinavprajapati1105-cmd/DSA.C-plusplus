#include<iostream>
#include<cstdio>
using namespace std;
struct Node{
    int data;
    Node*next;
};
bool IsItCycle(Node *head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
//  Node* head = new Node{10, nullptr};
//  Node*second=new Node{30,nullptr};
//  Node*third=new Node{50,nullptr};
//  Node*fourth=new Node{70,nullptr};
Node* head = new Node;
head->data = 10;
head->next = nullptr;

Node* second = new Node;
second->data = 30;
second->next = nullptr;

Node* third = new Node;
third->data = 50;
third->next = nullptr;

Node* fourth = new Node;
fourth->data = 70;
fourth->next = nullptr;


 head->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=second;

 if(IsItCycle(head)){
    cout<<"Cycle is detect:";
 }else{
    cout<<"No cycle form:";
 }
 return 0;
}