#include<iostream>
#include<cstdio>
using namespace std;
int linSearch(int A[],int n, int key){
    for(int i=0;i<n;i++){
      if(A[i]==key){
        return i;
      }
    }
    return -1;
}
int main(){
 int n;
 cout<<"Enter the number the elements:";
 cin>>n;
 int A[n];
 cout<<"Enter the elemnts:";
 for(int i=0;i<n;i++){
  cin>>A[i];
 }
 int key;
 cout<<"Enter the key element:";
 cin>>key;
 int ind=linSearch(A,n,key);
 if(ind!=-1){
    cout<<"Element is found="<<ind<<endl;
 }else{
    cout<<"Element is not found";
 }
 return 0;
}