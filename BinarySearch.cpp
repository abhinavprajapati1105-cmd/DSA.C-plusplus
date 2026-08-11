#include<iostream>
#include<cstdio>
using namespace std;
int BinSearch(int A[],int n, int key){
    int low=0,high=n-1;
    while(high>=low){
        int mid=(low+high)/2;
      if(A[mid]==key){
        return mid;
      }
      else if(A[mid]>key){
       high=mid-1;
      }
      else{
       low=mid+1;
      }
    }
    return 0;
}
int main(){
 int n,i;
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
 int index=BinSearch(A,n,key);
 if(index!=0){
    cout<<"Element is found at "<<BinSearch(A,n,key);
 }else{
    cout<<"Element is not found:";
 }
 return 0;
}