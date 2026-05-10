#include<iostream>
#include<vector>
using namespace std;


class solution {
	public:
		// Binary method 
		int kthpositive(vector<int> &arr, int k){
			int start =0;
			int end = arr.size()-1;
			while(start<=end){
				int mid = start + (end-start)/2;
				int missing = arr[mid]-(mid+1); // main formula that find missing term 
				
				if(missing<k){
					start = mid +1;
					
				}
				else {
					end = mid -1;
				}
			}
			return start+k;
		}
		
		// linear method 
		
	int kthpos(vector<int> &arr,int k){
		int num =1;
		int i =0;
		// check that number is same as arr terms or not 
		while (true){
			if(i<arr.size() && arr[i]==num){
				i++;
			}
			else{
				k--;
				if(k==0){
					return num ;
				}
			}
			num ++;
		}
	}
};
	

int main (){

	 vector<int> arr;

    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(11);
    
	int k =5;
	
	solution s ;
	cout<<s.kthpos(arr,k)<<endl;
	cout<<s.kthpositive(arr,k)<<endl;
	
}
