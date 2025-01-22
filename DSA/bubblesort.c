#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
            printarr(a,size);
        }
    }
}
void printarr(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() {
    int size = 8;
    int a[] = {30,20,10,60,70,40,90,60};
    printf("Original array:\n");
    printarr(a, size);
    printf("\nSorting steps:\n");
    bubblesort(a, size);
    printf("\nSorted array:\n");
    printarr(a, size);
    return 0;
}