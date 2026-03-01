#include<iostream>
using namespace std;
/*
Frequencies in a Limited Array GFG 
same as previous question find missing and repeating number 
1. decrease all by one  so that it can fit into array 
2. then go through all element and using modulus operator add n 
3. last using for loop to travese and print all the number with thier occurance ; occurane - arr[i]/n;
time complexity - O(n) space complexity - O(1)



*/
int main (){
	int arr [8]={1,2,2,2,3,6,8,4};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	for (int i = 0;i<n;i++){
		arr[i]--;
	}
	for (int i = 0;i<n;i++){
		arr[arr[i]%n]+=n;
	}
	
		// repeating number 
		cout<<"number "<<" - "<<"occurance"<<endl;
	for (int i = 0;i<n;i++){
		cout<<i+1<<"\t-\t"<<arr[i]/n<<endl;		
		}
	}
	

