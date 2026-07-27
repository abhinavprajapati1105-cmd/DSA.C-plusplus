
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
     cout<<"The Factorial is="<<fact;
   return 0;
}