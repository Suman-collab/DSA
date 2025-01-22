#include<iostream>
using namespace std;

void no_of_occ(int arr[], int n) {
    int a[n] = {0}; // Array to store occurrence counts, initialized to 0
    bool visited[n] = {false}; // Track which elements have already been processed

    for (int i = 0; i < n; i++) {
        if (!visited[i]) { // Process only unvisited elements
            int count = 1; // Start count for the current element
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = true; // Mark duplicates as visited
                }
            }
            a[i] = count; // Store the count for arr[i]
        }
    }

    // Print the elements and their counts
    cout << "Element : Count\n";
    for (int i = 0; i < n; i++) {
        if (!visited[i]) { // Only print for unique/first occurrences
            cout << arr[i] << " : " << a[i] << endl;
        }
    }
}

int main() {
    int arr[] = {1, 1, 2, 3, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    no_of_occ(arr, n);
    return 0;
}
