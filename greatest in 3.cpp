#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b and c:";
    cin>>a,b,c;
    if((a>b) && (a>c)){
        cout<<"a="<<a;
    }else if((b>a) && (b>c)){
         cout<<"b="<<b;
    }else{
         cout<<"c="<<c;
    }
    return 0;
}