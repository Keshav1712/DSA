#include<iostream>
using namespace std;
// Time complexity - O(Ncube)
int main (){
int arr [4][3]={1,2,3,4,5,6,7,8,9,10,11,19};
int x = 4;

for(int i =0;i<4;i++){
	for (int j=0;j<3;j++){
		if(arr[i][j]==x){
			cout << " found at index : "<<i<<" "<<j<<endl;
			return 0;
		}
	}
}
cout << "not found "<<endl;




	return 0;
}
