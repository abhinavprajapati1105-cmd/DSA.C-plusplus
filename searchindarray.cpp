#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int n,key;
cout<<"Enter the no of elements:";
cin>>n;
int A[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>A[i];
}
cout<<"Enter the search element:";
cin>>key;
for(int i=0;i<n;i++){
    if(A[i]==key){
        cout<<"Element is found at index:"<<i;
        return 0;
   }
}
    cout<<"Element is not found";
return 0;
}