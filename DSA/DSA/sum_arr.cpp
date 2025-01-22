#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int result=sum(arr,size);
    cout<<"Sum of the array is: "<<result;
    return 0;
}