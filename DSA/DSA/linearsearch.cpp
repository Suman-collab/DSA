#include<iostream>
using namespace std;
bool linearseach(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
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
    int key;
    cout<<"Enter the Key";
    cin>>key;
    if(linearseach(arr,size,key)){
        cout<<"Element is present in array";
    }
    else{
        cout<<"Element is not present in array";
    }
    return 0;
}