#include<iostream>
using namespace std;

// Function to find if there exists a pair in the array that sums up to 'num'
void sum_of_two(int arr[], int num, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == num) {
                cout << "(" << arr[i] << "," << arr[j] << ")"<<" ";
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int num;
    cout << "Enter the num: ";
    cin >> num;
    int n = sizeof(arr) / sizeof(arr[0]);
    sum_of_two(arr, num, n);
    return 0;
}