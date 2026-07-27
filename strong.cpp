
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int num,dig;
int sum=0,fact=1;
cout<<"Enter the number:";
cin>>num;
int temp=num;
while(temp>0){
  dig=temp%10;
  for(int i=1;i<=dig;i++){
    fact*=i;
     }
  sum+=fact;
  fact=1;
  temp/=10;
   }
  if(num==sum){
  cout<<"This is strong number";
  }else
  {
    cout<<"This is not a strong number";
  }
 return 0;
}