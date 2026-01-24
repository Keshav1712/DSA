
#include <iostream>
using namespace std;
/*
This is a problem to fnd max differnece between two element in a given array 
time complexity - o(n) 
working - 
There is two variable first one store minimum element of a array and another one is largest difference  

*/

int Maxdiff(int arr [], int n){
    int minelement = arr[0];
    int maxdifference = arr[1]-arr[0];
    for (int i=1; i<n;i++){
        maxdifference =max(maxdifference,arr[i]-minelement);// store max diff 
        minelement = min(minelement , arr[i]);
    }
    return maxdifference;
} 

int main() {
    int arr[]={2,4,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << Maxdiff(arr,n)<<endl;
    
    return 0;
}
