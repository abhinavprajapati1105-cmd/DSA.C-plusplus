#include<iostream>
#include<cstdio>
using namespace std;
int LowerBound(int A[],int n,int target){
    int low=0,high=n-1,ans=n;
    while(high>=low){
        int mid=low+(high-low)/2;
       if(A[mid]>=target){
        ans=mid;
        high=mid-1;
       }
       else{
       low=mid+1;
       }
    }
    return ans;
}

int UpperBound(int A[],int n,int target){
    int low=0,high=n-1,ans=n;
    while(high>=low){
        int mid=low+(high-low)/2;
       if(A[mid]>target){
        ans=mid;
        high=mid-1;
       }
       else{
       low=mid+1;
       }
    }
    return ans;
}

int main(){
int n,target;
cout<<"Enter the number of elements:";
cin>>n;
int A[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>A[i];
}
cout<<"Enter target:";
cin>>target;
cout<<"For first occurence:"<<LowerBound( A, n,target)<<endl;
cout<<"For last occurence:"<<UpperBound( A, n,target)<<endl;
return 0;
}