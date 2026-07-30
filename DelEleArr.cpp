#include<iostream>
#include<cstdio>
using namespace std;
 void DisplayArr(int A[],int n){
   for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
 }
 void DelFrontArr(int A[],int &n){
    if(n==0){
        cout<<"Empty array:";
        return;
    }
 for(int i=0;i<n-1;i++){
   A[i]=A[i+1];
    }
   n--;
}
void DelRearArr(int A[],int &n){
   if(n==0){
        cout<<"Empty array:";
        return;
    }
    n--;
}
void DelIndexArr(int A[],int &n,int index){
    for(int i=index;i<n-1;i++){
      A[i]=A[i+1];
    }
    n--;
}
int main(){
    int n,index,choice;
  cout<<"Enter the no of element:";
  cin>>n;
  int A[20];
  cout<<"Enter the elements:";
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
cout<<"1.Delete front element\n:";
cout<<"2.Delete rear element\n:";
cout<<"3.Delete element at given index\n:";
cout<<"Insert choice:";
cin>>choice;
  
  switch(choice){
  case 1:
  DelFrontArr(A,n);
  break;

  case 2:
  DelRearArr(A,n);
  break;

  case 3:
  cout<<"Enter the index of element from (0 to "<< n <<" )";
  cin>>index;
  DelIndexArr(A,n,index);
  break;

  default:
  cout<<"Invalid case:";
  break;
}
cout<<"Updated Array:";
DisplayArr(A,n);
  return 0;
}