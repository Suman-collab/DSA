#include<stdio.h>
void Linearsearch(int a[],int n){
    int key;
    printf("Enter the key:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("The element is found at %d",i);
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
    Linearsearch(a,size);
    return 0;
}