#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*

Wave form printing of a 2d array so the logic is clear we notice that when cloumn index is even then
 we have to print up to down and if column index is odd then down to up 
 
 Time complexity - O(nsq)
 space complexity =- O(1)

*/


int main (){
    int n , m;
	cout<<"Enter rows :";
	cin>>n;
	cout<<"Enter cols :";
	cin>>m;
    // creating 2d vector 
    vector<vector<int> > matrix (n, vector<int> (m,1));
    // user input for array
     for (int i =0;i<m;i++){
    for(int j=0;j<n;j++){
    cin>>matrix[i][j];
    }}
     // original array 
     cout << "original array "<<endl;
    for (int i =0;i<m;i++){
    for(int j=0;j<n;j++){
    cout<<matrix[i][j]<<" ";
    }}
    
    // wave form creation 
     cout<<"\nwave form printing "<<endl;
    
    for(int j =0;j<m;j++){
        
        if(j%2==0){
            // Even - up to down like wave 
            for (int i =0;i<n;i++){
                cout << matrix [i][j]<<" ";
            }
            
        }
        else {
            // odd - down to up 
            for (int i =n-1;i>=0;i--){
                cout << matrix [i][j]<<" ";
            }
        }
    }

    return 0;
}
