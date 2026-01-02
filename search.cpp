#include<iostream>

using namespace std;
void input(int arr[],int n ){
	cout << " enter array elemnts :"<<endl;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
}
void linears(int arr[], int n, int ele) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == ele) {
            cout << "Element found at index " << i << endl;
            return;   // stop after finding
        }
    }
    cout << "Element not found" << endl;
}

 int main() {
 	int n;
 	int ele;
 	cout<< " enter elements of an array :"<<endl;
 	cin>>n;
 	int *arr=new int[n];
 	input(arr,n);
 	cout<<"enter element to search:"<<endl;
 	cin>>ele;
 	linears(arr,n,ele);
	return 0;
 }
