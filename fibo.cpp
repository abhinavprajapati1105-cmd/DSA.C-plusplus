#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int t,n;
    int t1=0,t2=1;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n>=1){
      cout<<t1;
    }
    if(n>=2){
      cout<<" "<<t2;
    }
    for(int i=3;i<=n;i++){
        t=t1+t2;
        t1=t2;
        t2=t;
         cout<<","<<t2;
    }

    return 0;
}