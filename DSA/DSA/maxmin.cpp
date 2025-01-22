#include<iostream>
using namespace std;

int max(int *num, int size) {
    int maximum = num[0]; // Initialize with the first element
    for (int i = 1; i < size; i++) {
        if (num[i] > maximum) {
            maximum = num[i];
        }
    }
    return maximum;
}
int min(int * num,int size){
    int minimum = num[0]; // Initialize with the first element
    for (int i = 1; i < size; i++) {
        if (num[i] < minimum) {
            minimum = num[i];
            }
    }
    return minimum;
}
int main() {
    int num[4];
    cout << "Enter the elements to save in array:";
    for (int i = 0; i < 4; i++) {
        cin >> num[i];
    }
    cout << "The max Element is " << max(num, 4) << endl;
    cout << "The min Element is " << min(num, 4) << endl;
    return 0;
}