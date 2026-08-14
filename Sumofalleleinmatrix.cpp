#include<iostream>
#include<cstdio>
using namespace std;
void Inputnum(int A[10][20],int rows,int colms){
  cout<<"\nEnter Elements:\n";
  for(int i=0;i<rows;i++){
    for(int j=0;j<colms;j++){
        cin>>A[i][j];
    }
  }
}
void Displaynum(int A[10][20],int rows,int colms){
  cout<<"\nShowing Elements in matrix form:\n";
  for(int i=0;i<rows;i++){
    for(int j=0;j<colms;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
}
int SumElementsofmatrix(int A[10][20],int rows,int colms){
   int sum=0;
   for(int i=0;i<rows;i++){
    for(int j=0;j<colms;j++){
        sum=sum+A[i][j];
    }
  }
  return sum;
}


int main(){
    int rows,colms,sum;
    int A[10][20];
    cout<<"Enter the no of rows:";
    cin>>rows;
    cout<<"Enter the no of colms:";
    cin>>colms;
   Inputnum(A,rows,colms);
   Displaynum(A,rows,colms);
   cout<<"sum="<<SumElementsofmatrix(A,rows,colms);
   return 0;
}
