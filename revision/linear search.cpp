#include<iostream>
using namespace std;
/*linear search */
int main (){
	int a[] = {23,11,22,56,34};
	int n = sizeof(a)/sizeof(a[0]);
	int k = 11;

	bool found = false;

	for (int i = 0; i < n; i++){
		if(a[i] == k){
			cout << "found at " << i << " = " << a[i];
			found = true;
			break;
		}
	}

	if(!found){
		cout << "not found" << endl;
	}

	return 0;
}
