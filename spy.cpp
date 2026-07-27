
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int num,dig;
int sum=0,pro=1;
cout<<"Enter the number:";
cin>>num;
while(num>0){
    dig=num%10;
    sum=sum+dig;
    pro=pro*dig;
    num/=10;
  }
  if(sum==pro){
    cout<<"The given number is spy";
  }else{
    cout<<"The given number is not spy";
  }
 return 0;
}