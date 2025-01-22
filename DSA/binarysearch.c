#include<stdio.h>
void binarysearch(int a[],int n){
    int key;
    printf("Enter the key:");
    scanf("%d",&key);
    int high=n-1;
    int low=0;
    while(low<high){
        int mid=(low+high)/2;
        if(key<a[mid]){
            high=mid-1;
        }
        if(key>a[mid]){
            low=mid+1;
        }
        if(a[mid]==key){
            printf("The element is found at %d position",mid);
            break;
        }
    }
}
int main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element of sorted array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    binarysearch(a,size);
    return 0;
}