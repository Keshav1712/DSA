#include <iostream>
using namespace std;

/*
Search an element in a rotated sorted array
Time Complexity: O(log n)
Space Complexity: O(1)
Assumption: No duplicate elements
*/

int searchRotated(int arr[], int n, int target) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // element found
        if (arr[mid] == target)
            return mid;

        // left half is sorted
        if (arr[start] <= arr[mid]) {
            if (arr[start] <= target && target < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // right half is sorted
        else {
            if (arr[mid] < target && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1; // not found
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    cout << searchRotated(arr, n, target) << endl;
    return 0;
}

