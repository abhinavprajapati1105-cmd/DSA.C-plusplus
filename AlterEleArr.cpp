#include<iostream>
#include<cstdio>
using namespace std;
void InputArr(int A1[],int n){
    for(int i=0;i<n;i++){
        cin>>A1[i];
    }
}
void SwapElement(int A1[],int n,int temp){
    for(int i=0;i<n-1;i=i+=2){
        temp=A1[i];
       A1[i]=A1[i+1];
      A1[i+1]=temp;
    }
}

void  DisplayArr(int A1[],int n,int temp){
for(int i=0;i<n;i++){
    cout<<A1[i]<<" ";
   }
}
int main(){
    int n,temp;
    cout<<"Enter the number of elements:";
    cin>>n;
  int A1[n];
    cout<<"Enter elements:";
   InputArr(A1,n);
   SwapElement(A1,n,temp);
   cout<<"After Swapping:";
   DisplayArr(A1,n,temp);
   return 0;
}