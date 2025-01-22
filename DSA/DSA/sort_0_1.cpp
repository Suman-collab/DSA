#include<iostream>
using namespace std;

// Function to print the array
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  // Add a newline after printing the array
}

// Function to perform bubble sort
void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printarr(arr, n);  // Print the array after each pass
    }
}

int main() {
    int arr[] = {0, 0, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The original Array: ";
    printarr(arr, n);

    cout << "The sorted Array Steps: " << endl;
    bubblesort(arr, n);

    return 0;
}