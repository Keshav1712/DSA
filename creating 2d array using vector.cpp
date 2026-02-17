#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
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
    cin>>matrix[i][j]<<" ";
    }}
    
    for (int i =0;i<m;i++){
    for(int j=0;j<n;j++){
    cout<<matrix[i][j]<<" ";
    }}
//    // printing size 
//    cout <<"\nROWs "<< matrix.size()<<endl;
//    cout <<"column "<< matrix[0].size()<<endl;
//    
    return 0;
}
