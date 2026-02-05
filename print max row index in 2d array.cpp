#include <iostream>
#include <climits>
using namespace std;

/*
Printing max sum of a row and row index 

*/

int maxRow(int arr[3][3], int &maxSum) {
    maxSum = INT_MIN;
    int index = -1;

    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += arr[i][j];
        }

        if (total > maxSum) {
            maxSum = total;
            index = i;
        }
    }
    return index;
}

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum;
    int rowIndex = maxRow(arr, sum);

    cout << rowIndex << " " << sum << endl;
    return 0;
}

