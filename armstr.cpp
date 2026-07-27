
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int num,dig;
    int sum=0;
    cout<<"Enter the number:";
    cin>>num;
    int temp=num;
    while(temp>0){
        dig=temp%10;
       sum+=pow(dig,3);
       temp/=10;
    }
    if(sum==num){
   cout<<"The given number is armstrong";
    }
    else{
    cout<<"The given number is not armstrong";
    }
    return 0;
}