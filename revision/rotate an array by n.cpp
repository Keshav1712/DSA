#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
	int arr[]={2,3,6,7,8,9};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<"enter rotation"<<endl;
	
	int m ;
	cin>> m;
	cout<<"\n";
	  m = m % n;   // in case m > n
	  
	vector<int> temp;
	 for (int i = n - m; i < n; i++) {
        temp.push_back(arr[i]);
    }
	for(int i = n-m-1;i>=0;i--){
		arr[i+m]=arr[i];
	}
	// wapas write back 
	for(int i=0;i<m;i++){
		arr[i]=temp[i];
		
	}
	
	// displaying an array 
	for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	
	
	
	return 0;
}

