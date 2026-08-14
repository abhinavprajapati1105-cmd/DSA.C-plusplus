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
void ColumnMajorOrder(int A[10][20],int rows,int colms){
    cout<<"\nShowing Elements in column order:\n";
    for(int j=0;j<colms;j++){
        for(int i=0;i<rows;i++){
          cout<<A[i][j]<<" ";
     }
     cout<<endl;
   }
}

int main(){
    int rows,colms;
    int A[10][20];
    cout<<"Enter the no of rows:";
    cin>>rows;
    cout<<"Enter the no of colms:";
    cin>>colms;
   Inputnum(A,rows,colms);
   Displaynum(A,rows,colms);
   ColumnMajorOrder(A,rows,colms);
   return 0;
}