#include<iostream>
#include<cstdio>
using namespace std;
void InputArr(int A1[],int n){
    for(int i=0;i<n;i++){
        cin>>A1[i];
    }
}
void UpdatedArr(int A1[],int A2[],int store,int n){
     for(int i=0;i<n;i++){
       store=A1[i]*A1[i]*A1[i];
       A2[i]=store;

     }
    }

    int main(){
        int n,store;
        cout<<"Enter the number of elemnts:";
        cin>>n;
        int A1[n],A2[n];

        cout<<"Enter Elements:";
        InputArr(A1,n);

        UpdatedArr(A1,A2,store,n);
        for(int i=0; i<n;i++)
        {
            cout<<A2[i]<<" ";
        }  
        return 0;     
    }