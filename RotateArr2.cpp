#include<iostream>
#include<cstdio>
using namespace std;
 void DisplayArr(int A[],int n){
   for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
 }
void RotatedArr1(int A[],int n,int store,int k){
  k=k%n;
  for(int i=0;i<k;i++){
     store=A[n-1];
for(int j=n-1;j>0;j--){
  A[j]=A[j-1];
  }
  A[0]=store;
}
}
int main(){
int n,store,k;
cout<<"Enter the no of elements:";
cin>>n;
int A[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>A[i];
}
cout<<"Enter no that shift places:";
cin>>k;
 DisplayArr(A, n);
cout<<"The rotated Array:";
RotatedArr1(A, n,store,k);
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
  return 0;
}