#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int minimum(int a[],int pos,int n){
    int min=a[pos];
    int minI;
    for(int i=pos+1;i<n;i++){
        if(a[i]<min){
            minI=i;
            min=a[i];
        }
    }
    return minI;
}
void selectionsort(int a[],int n){
    for(int i=0;i<n;i++){
      printarr(a,n);
      int min=minimum(a,i+1,n);
      if(a[i]>a[min])
      swap(&a[i],&a[min]);
    }
}
void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    selectionsort(a,size);
    return 0;
}