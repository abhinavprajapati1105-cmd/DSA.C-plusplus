#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int arr[]={2,5,8,4,9};
int sum=0,pro=1;
for(int i=0;i<5;i++){
if(i%2==0){
    pro=pro*arr[i];
}else{
    sum=sum+arr[i];
}
}
cout<<"sum="<<sum<<endl<<"pro="<<pro;
return 0;
}