#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int num,dig;
int largest=0,smallest=9;
cout<<"Enter the number:";
cin>>num;
while(num>0){
    dig=num%10;
     if(dig>largest)
     largest=dig;
     if(dig<smallest)
     smallest=dig;
     num=num/10;
}
cout<<"largest dig="<<largest<< endl <<"smallest dig="<<smallest;
return 0;
}