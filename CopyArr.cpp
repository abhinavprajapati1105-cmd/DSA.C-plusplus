#include<iostream>
#include<cstdio>
using namespace std;
void CopyArr(int A1[],int A2[],int n){
    for(int i=0;i<n;i++){
      A2[i]=A1[i];
    }
}
void DisArr(int A1[],int n){
    for(int i=0;i<n;i++){
      cout<<A1[i]<<" "<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int A1[n],A2[n];
    for(int i=0;i<n;i++){
        cin>>A1[i];
    }
    CopyArr(A1,A2,n);
    cout<<"CopyArr";
    CopyArr(A1,A2,n);
    cout<<"DisArr";
    DisArr(A2,n);
    return 0;
}