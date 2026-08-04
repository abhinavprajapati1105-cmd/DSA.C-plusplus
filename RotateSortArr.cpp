#include<iostream>
#include<cstdio>
using namespace std;
void InputArr(int n,int A[]){
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
}

bool RotateSortArr(int A[],int n){
    int count=0;
for(int i=0;i<n-1;i++){
   if(A[i]>A[i+1])
   count++;
}
if(A[n-1]>A[0])
count++;
return count;
}

int main(){
int n;
cout<<"Enter the number of elements:";
cin>>n;
int A[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>A[i];
}
if(RotateSortArr(A,n)){
cout<<"Roated array is sorted";
}else{
cout<<"Roated array is not sorted";
}
return 0;
}


