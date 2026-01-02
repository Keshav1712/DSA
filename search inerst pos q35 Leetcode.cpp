#include <iostream>
using namespace std;

/*
LeetCode Question 35: Search Insert Position
Given a sorted array of unique integers and a target value, return the index if the target is found.
If not, return the index where it would be inserted to maintain sorted order.

Example:
arr = {1,3,4,6,7}, target = 5 ? returns 3
arr = {1,3,4,6,7}, target = 8 ? returns 5

Time Complexity: O(log n)  - Binary search
Space Complexity: O(1)
*/

int SearchInsert(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    int ans = n; // Default insertion position is at the end

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            start = mid + 1; // Search in right half
        }
        else {
            ans = mid;      // Potential insert position
            end = mid - 1;  // Search in left half
        }
    }
    return ans; // Target not found, return insert position
}

int main() {
    int arr[] = {1, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target1 = 5;
    int target2 = 8;

    cout << "Target " << target1 << " should be at position: " << SearchInsert(arr, n, target1) << endl;
    cout << "Target " << target2 << " should be at position: " << SearchInsert(arr, n, target2) << endl;

    return 0;
}

