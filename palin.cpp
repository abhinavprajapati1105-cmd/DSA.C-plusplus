
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int num,rem;
    int rev=0;
    cout<<"Enter the num:";
    cin>>num;
    int temp=num;
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
       if(rev==num){
   cout<<"The given number is palindrome";
    }
    else{
    cout<<"The given number is not palindrome";
    }
    return 0;
}