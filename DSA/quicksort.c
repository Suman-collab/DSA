#include<stdio.h>
void swap(int * a,int * b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(pivot>a[j]){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return i+1;
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}
void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[]={10,9,8,7,6};
    int n=sizeof(a)/sizeof(int);
    printarr(a,n);
    quicksort(a,0,n-1);
    printarr(a,n);
    return 0;
}