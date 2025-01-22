#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void revarr(int arr[], int n) {
    for(int i=0;i<n/2;i++){
        swap(&arr[i],&arr[n-1-i]);
    }
}
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    revarr(arr,n);
    printarr(arr,n);
    return 0;
}