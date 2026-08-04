#include<iostream>
#include<cstdio>
using namespace std;
 void DisplayArr(int A[],int n){
   for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
 }
void RotatedArr1(int A[],int n,int store){
for(int i=n-1;i>0;i--){
  store=A[i];
  A[i]=A[i-1];
  A[i-1]=store;
  }
  
}
int main(){
int n,store;
cout<<"Enter the no of elements:";
cin>>n;
int A[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>A[i];
}
 DisplayArr(A, n);
cout<<"The rotated Array:";
RotatedArr1(A, n,store);
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
  return 0;
}