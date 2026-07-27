#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a="<<a<<" and b="<<b;
return 0;
}