#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int num,dig;
    int sum=0;
    cout<<"Enter the num:";
    cin>>num;
    while(num>0){
        dig=num%10;
        sum=sum+dig;
        num/=10;
    }
     cout<<"Sum of digits="<<sum;
     return 0;
}