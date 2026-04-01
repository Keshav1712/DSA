#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
FActorail of a large number that cannot be handle buy int 
GFG question 

*/
class sol{
	public:
		vector<int> fact(int n){
			vector<int> ans (1,1);
			while (n>1){
				int carry=0;
				int res;
				int size=ans.size();
				
				for(int i =0;i<size;i++){
					res =ans[i]*n+carry;
					carry = res/10;
					ans[i]=res%10;
				}
				while(carry){
					ans.push_back(carry%10);
					carry /=10;
					
				}
				n--;
			}
			reverse(ans.begin(),ans.end());
			return ans;
		}
};
int main (){
	sol s;
	int a;
	cout<<"Enter a number for factorial "<<endl;
	cin>>a;
	vector<int> result = s.fact(a);

	for(int i=0;i<result.size();i++){
		cout <<result[i];
	}
	return 0;
}
