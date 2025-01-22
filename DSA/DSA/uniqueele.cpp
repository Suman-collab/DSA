#include<iostream>
using namespace std;
int unique(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                j++;
            }
        }
    }
}
int main()
{
    int arr[]={1,2,3,3,3};
    int n=sizeof(arr)/sizeof(int);
    if(unique(arr,n))
    cout<<"Array has unique elements";
    else
    cout<<"Array has duplicate elements";
    return 0;
}