#include<iostream>
using namespace std;

// Function to find if there exists a pair in the array that sums up to 'num'
void sum_of_two(int arr[], int num, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for(int k = j+1;k < n;k++){
                if (arr[i] + arr[j] + arr[k] == num) {
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                    }
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