#include<iostream>
using namespace std;
int find(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={100,222,222,100,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The uique Element is "<<find(arr,n);
    return 0;
}