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
void Sumofeachrow(int A[10][20],int rows,int colms){
   for(int i=0;i<rows;i++){
    int sum=0;
    for(int j=0;j<colms;j++){
        sum=sum+A[i][j];
    }
    cout<<"sum of row"<<i+1<<"="<<sum<<endl;
  }
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
   Sumofeachrow(A,rows,colms);
   return 0;
}