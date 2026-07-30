#include<iostream>
#include<cstdio>
using namespace std;
 void DisplayArr(int A[],int n){
   for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
 }
 void FrontArr(int A[],int &n,int store){
 for(int i=n;i>0;i--){
   A[i]=A[i-1];
    }
   A[0]=store;
   n++;
}
void RearArr(int A[],int &n,int store){
    A[n]=store;
    n++;
}
void IndexArr(int A[],int &n,int index,int store){
    for(int i=n;i>index;i--){
      A[i]=A[i-1];
    }
    A[index]=store;
    n++;
}
int main(){
    int n,index,choice,store;
  cout<<"Enter the no of element:";
  cin>>n;
  int A[20];
  cout<<"Enter the elements:";
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
cout<<"1.Insert front element\n:";
cout<<"2.Insert rear element\n:";
cout<<"3.Insert element at given index\n:";
cout<<"Insert choice:";
cin>>choice;
  
  switch(choice){
  case 1:
  cout<<"Enter element:";
  cin>>store;
  FrontArr(A,n,store);
  break;

  case 2:
  cout<<"Enter element:";
  cin>>store;
  RearArr(A,n,store);
  break;

  case 3:
  cout<<"Enter the index of element from (0 to "<< n <<" )";
  cin>>index;
  cout<<"Enter element:";
  cin>>store;
  IndexArr(A,n,index,store);
  break;

  default:
  cout<<"Invalid case:";
  break;
}
cout<<"Updated Array:";
DisplayArr(A,n);
  return 0;
}