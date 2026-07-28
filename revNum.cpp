
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int num,rem;
    int rev=0;
    cout<<"Enter the num:";
    cin>>num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"reverse number is="<<rev;
    return 0;
}