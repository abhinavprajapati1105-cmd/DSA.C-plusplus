#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int n;
cout<<"Enter the no of elements:";
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
cout<<"Enter the duplicate elements:";
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(A[i]==A[j]){
         cout<<A[i]<<" ";
         break;
        }
    }
}
return 0;
}