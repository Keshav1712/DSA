#include<iostream>
using namespace std ;


void subarray(int arr [],int n ){
	
	 // length of subarray
    for (int len = 1; len <= n; len++) {
        cout << "Subarrays of size " << len << ":\n";

        // starting index
        for (int i = 0; i <= n - len; i++) {

            // print elements of subarray
            for (int j = i; j < i + len; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
		
	}
int main() {
    int arr[] = {1, 2, 3, 4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    subarray(arr, n);
    return 0;
}
