#include<iostream>
using namespace std ;
/*
Search in sorted row and colm wise array where all row and colm sorted but not entire matrix so we start from last element of 
1st row and check is the number is larger or smaller than the number it its larger then
 go down means change in row and if smaller than it then go for left j--
 time complexity - O(n+m) Best case - O(1)
 space complexity - O(1)

*/

int main (){
	int arr[4][4]	={4,8,12,25,18,22,26,42,36,40,45,68,48,50,72,99};
	int n=4;
	int target =68;
	int i =0, j=n-1;
	while(i<n&&j>=0){
		if(arr[i][j]==target){
			cout<<"elemnt found at "<<i<<" "<<j<<endl;
			return 1;
		}
		else if(arr[i][j]<target){
			i++;
		}
		else{
			j--;
		}
		
	}
	return 0;
}
