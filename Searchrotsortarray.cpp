#include<iostream>
#include<cstdio>
using namespace std;
void InputArr(int n,int A[]){
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
}

int SearchRotateSortArr(int A[],int n,int key){
    int count=0;
    for(int i=0;i<n-1;i++){
       if(A[i]>A[i+1]){
        count= n+1;
        break;
       }
    }

    for(int i=0;i<count;i++){
       if(A[i]==key){
        return i;
       }
    }
    for(int i=count;i<n;i++){
       if(A[i]==key){
        return i;
       }
    }
  return 0;
}

int main(){
int n,key;
cout<<"Enter the number of elements:";
cin>>n;
int A[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>A[i];
}
cout<<"Enter key element:";
cin>>key;
if(SearchRotateSortArr(A,n,key)){
cout<<"Roated array is sorted";
}else{
cout<<"Roated array is not sorted";
}
return 0;
}


