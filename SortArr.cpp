#include<iostream>
#include<cstdio>
using namespace std;
bool IsAscSort(int A[],int ind){
    for(int i=0;i<ind-1;i++){
      if(A[i]>A[i+1]){
      return false;
      }
    }
    return true;
}
bool IsDesSort(int A[],int ind){
    for(int i=0;i<ind-1;i++){
      if(A[i]<A[i+1]){
      return false;
      }
    }
    return true;
}
int main(){
     int n;
  cout<<"Enter the number of elements in an array:";
  cin>>n;
  int A[n];
  cout<<"Enter Elements:";
  for(int i=0;i<n;i++){
      cin>>A[i];
  }
     int length=sizeof(A)/sizeof(A[0]);   
    if(IsAscSort(A,length)){
        cout<<"Array is sorted";
    }else if(IsDesSort(A,length)){
        cout<<"Array is sorted:";
    }else{
       cout<<"Array is not sorted:";
    }
    return 0;
}
