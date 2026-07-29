#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int A[]={4,8,2,9,5};
    int largest=0;
    for(int i=0;i<5;i++){
       if(A[i]>largest){
         largest=A[i];
       }
  }
  cout<<"The largest element in an array="<<largest;
    return 0;
}

