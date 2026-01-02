#include <iostream>
using namespace std;

void input(int arr[], int n) {
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
// FOR DELETION of an element in array 
int del (int arr[],int &n,int pos){
	if(pos<0||pos>=n){
		cout<<"invalid position"<<endl;
	return 0;}
	for (int i = pos ; i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
void print (int arr[],int n){
	for(int i=0;i<n;i++){
		cout<< i<<" "<<"element is : "<<arr[i]<<endl;
	}
}

int main() {
    int n,pos;
    cout << "Enter array size: ";
    cin >> n;
    

    int* arr = new int[n];   // dynamic array

    input(arr, n);
    print(arr,n);
    cout << "enter position that u want to delete (0 to n): "<< endl;
    cin>>pos;
    del(arr,n,pos);
    print(arr,n);

    delete[] arr;  // free memory
    return 0;
}

