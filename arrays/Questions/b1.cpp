#include <iostream>
using namespace std;
//to find first and last element of sorted array with key
void binarySearch(int arr[], int size, int key) {
    int first = -1, last = -1;

    // Find first occurrence
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            first = mid;
            end = mid - 1;   // Search on left side
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // Find last occurrence
    start = 0;
    end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            last = mid;
            start = mid + 1;   // Search on right side
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
}

int main() {
    int arr[4] = {0, 1, 1, 5};
    int k = 1;

    binarySearch(arr, 4, k);

    return 0;
}