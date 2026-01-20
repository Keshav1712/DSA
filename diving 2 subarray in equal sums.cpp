#include <iostream>
#include <vector>
using namespace std;
/* Dividing two subarray with equal sum 
1. Brute force - Time Complexity O(ncube)
2. Better Appproach - Time complexity O(n)

*/
// Brute approach 
int divb(const vector<int> & arr){
    int sum1=0,sum2=0;
    int n= arr.size();
    for (int i=0;i<n;i++){
        //first part sum 
        for(int j=0;j<=i;j++){
            sum1+=arr[j]; // sum of 1st subarray 
        }
         for(int k=i+1;k<n;k++){
            sum2+=arr[k]; // sum of 1st subarray 
        }
        if(sum1==sum2){
            return 1;
        }
    }
    return -1;
}

// Better approach 
int div(const vector<int>& arr) {
    int total = 0;
    int prefix = 0;

    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
    }

    for (int i = 0; i < arr.size() - 1; i++) {
        prefix += arr[i];
        int ans = total - prefix;
        if (ans == prefix) {
            return 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {3, 4, -2, 5, 8, 20, -10, 8};
    cout << div(arr) << endl;// optmal approach
    cout<<divb(arr)<<endl;// brute force 
    return 0;
}
