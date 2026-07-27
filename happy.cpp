
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
 int num,dig;
 
 cout<<"Enter the number:";
 cin>>num;
 while((num!=1 && num!=4) && (num!=0))
  {
    int sum=0;
    while(num>0){
 dig=num%10;
 sum+=pow(dig,2);
 num/=10;
    }
   num=sum;
 }
 if(num==1){
  cout<<"It is happy number:";
 }
 else{
 cout<<"It is not a happy number:";
 }
 return 0;
}