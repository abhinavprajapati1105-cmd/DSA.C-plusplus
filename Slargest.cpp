#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int A[]={10,5,4,52,19};
    int Flargest=0,Slargest=0;
    int length=sizeof(A)/sizeof(A[0]);
    cout<<length<<endl;
    for(int i=0;i<5;i++){
        if(A[i]>Flargest){
           Slargest=Flargest;
           Flargest=A[i];
        }else if(A[i]>Slargest){
          Slargest=A[i];
        }
    }
    cout<<"Slargest="<<Slargest;
    return 0;
}