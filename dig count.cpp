#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int num,dig;
    int count=0;
    cout<<"Enter the num:";
    cin>>num;
    while(num>0){
        dig=num%10;
        count++;
        num/=10;
    }
   cout<<"digits count="<<count;
    return 0;
}