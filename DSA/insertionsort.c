#include<stdio.h>
void insertionsort(int a[],int size){
    for(int i=1;i<size;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        // printarr(a,size);
    }
}
void printarr(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the Size:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    insertionsort(a,size);
    return 0;
}