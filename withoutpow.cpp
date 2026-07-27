
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,x;
    long long res=1;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of x:";
    cin>>x;
    for(int i=1;i<=x;i++){
       res=res*n;
    }
    cout<<n <<" to power"<<x<<"="<<res;
    return 0;
}