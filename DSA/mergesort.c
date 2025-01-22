#include<stdio.h>
void merge(int a[],int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++){
        l[i]=a[left+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=a[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1&&j<n2){
        if(l[i]<=r[j])
        a[k++]=l[i++];
        else
        a[k++]=r[j++];
    }
    while(i<n1){
        a[k++]=l[i++];
    }
    while(j<n2){
        a[k++]=r[j++];
    }
}
void mergesort(int a[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[]={1,10,3,2};
    int n=sizeof(a)/sizeof(int);
    printarr(a,n);
    mergesort(a,0,n-1);
    printarr(a,n);
    return 0;
}