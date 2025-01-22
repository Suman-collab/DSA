#include <iostream>
using namespace std;

void intersection(int a1[], int a2[], int n1, int n2) {
    int i = 0, j = 0;

    // Using two pointers to find the intersection
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            i++; // Move the pointer for the smaller element
        } else if (a1[i] > a2[j]) {
            j++; // Move the pointer for the smaller element
        } else {
            // Common element found
            cout << a1[i] << "\t";
            int current = a1[i];
            // Move both pointers to skip duplicates
            while (i < n1 && a1[i] == current) i++;
            while (j < n2 && a2[j] == current) j++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4,55,5};  // Sorted array with duplicates
    int arr2[] = {2, 2, 3, 4, 4,55}; // Sorted array with duplicates

    int n1 = sizeof(arr) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);

    intersection(arr, arr2, n1, n2);
    return 0;
}
