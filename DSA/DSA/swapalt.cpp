#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    * b = temp;
}
int swapalt(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            swap(&arr[i],&arr[i+1]);
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    swapalt(arr,n);
    printarr(arr,n);
    return 0;
}