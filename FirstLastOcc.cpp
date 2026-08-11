#include<iostream>
#include<cstdio>
using namespace std;
int FirstOccurence(int A[],int n,int target){
    int low=0,high=n-1,ans=-1;
    while(high>=low){
        int mid=low+(high-low)/2;
       if(A[mid]==target){
         ans=mid;
         high=mid-1;
       }else if(A[mid]>target){
        high=mid-1;
       }
       else{
       low=mid+1;
       }
    }
    return ans;
}

int LastOccurence(int A[],int n,int target){
    int low=0,high=n-1,ans=-1;
    while(high>=low){
        int mid=low+(high-low)/2;
       if(A[mid]==target){
         ans=mid;
         low=mid+1;
       }else if(A[mid]>target){
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
cout<<"For first occurence:"<<FirstOccurence( A, n,target)<<endl;
cout<<"For last occurence:"<<LastOccurence( A, n,target)<<endl;
return 0;
}