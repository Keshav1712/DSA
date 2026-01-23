
#include <iostream>
using namespace std;
int Maxdiff(int arr [], int n){
    int minelement = arr[0];
    int maxdifference = arr[1]-arr[0];
    for (int i=1; i<n;i++){
        maxdifference =max(maxdifference,arr[i]-minelement);
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
