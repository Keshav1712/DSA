#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {4, 3, 7, 2};
    int n = arr.size();

    // Initialize vectors of size n with 0
    vector<int> prefix(n);
    vector<int> suffix(n);

    // --- Calculate Prefix Sum (Left to Right) ---
    prefix[0] = arr[0]; // Base case
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // --- Calculate Suffix Sum (Right to Left) ---
    suffix[n - 1] = arr[n - 1]; // Base case
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    // --- Print Results ---
    cout << "Original: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    cout << "Prefix:   ";
    for (int x : prefix) cout << x << " ";
    cout << endl;

    cout << "Suffix:   ";
    for (int x : suffix) cout << x << " ";
    cout << endl;

    return 0;
}
