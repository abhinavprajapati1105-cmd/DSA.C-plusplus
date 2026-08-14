
#include<iostream>
#include<cstdio>
using namespace std;
void Inputnum(int A[10][20],int n){
  cout<<"\nEnter Elements:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>A[i][j];
    }
  }
}
void Displaynum(int A[10][20],int n){
  cout<<"\nShowing Elements in matrix form:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
}
void printdiagonalelement(int A[10][20],int n){
   int sum1=0,sum2=0;
   for(int i=0;i<n;i++){
     sum1=sum1+A[i][i];
     sum2=sum2+A[i][n-i-1];
   }
    cout<<"Enter the first diagonal="<<sum1<<endl;
    cout<<"Enter th second diagonal="<<sum2<<endl;
    cout<<"Show the max diagonal="<< " " ;
   
    if(sum1>=sum2){
        for(int i=0;i<n;i++){
            cout<<A[i][i];
        }
    }else{
        for(int i=0;i<n;i++){
           cout<<A[i][n-i-1];
        }
    }
    cout<<endl;
}

int main(){
    int n,sum;
    int A[10][20];
    cout<<"Enter the value of n:";
    cin>>n;
   Inputnum(A,n);
   Displaynum(A,n);
   printdiagonalelement(A,n);
   return 0;
}