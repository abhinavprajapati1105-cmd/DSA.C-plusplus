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
int count=0;
    while (temp != nullptr) {
      count++;
        temp = temp->next;
    }
    cout <<"No of Nodes"<<count;
    return 0;
}