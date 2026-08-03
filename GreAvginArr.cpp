
#include<iostream>
#include<cstdio>
using namespace std;
void InputArr(double A1[],int n){
    for(int i=0;i<n;i++){
        cin>>A1[i];
    }
}

double DisplayArr(double A1[],int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum=sum+A1[i];    
    }
     return sum/n;
}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    double A1[n];
    cout<<"Enter elements:";
   InputArr(A1,n);
   double avg=DisplayArr(A1,n);
   cout<<"Average="<<avg<<endl;
cout<<"Enter the elments greater than avg:";
   for(int i=0;i<n;i++){
       if(A1[i]>avg){
            cout<<A1[i]<<" ";
        }
   }
   return 0;
}