 #include<iostream>
#include<vector>
using namespace std;
/*
longest prefix and suffix in a given string 
time complexity - O(n)
space complexity - O(n)
working 
1. two pointer pre and suff point 0 1 
2. lps array for stroing lps for each element 
3. if s[pre] is equal to s[suff] then lps[suff] = pre +1 
4. else have 2 case first one if our pre is zero then lps suff =0 and else go for lps [pre-1] index and loop compare again a loop start 
5. return last index  value of lps array  return lps[size-1]


*/
class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        vector<int> lps (s.size(),0);
        int pre =0;
        int suff=1;
        
        while(suff<s.size()){
            if(s[pre]==s[suff]){
                lps[suff]=pre+1;
                pre++;
                suff++;
            }
            else{
                if(pre==0){
                    lps[suff]=0;
                    suff++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        return lps[s.size()-1];
    }
};
int main (){
	Solution s ;
	string b = "abcabdabcabdabdab";
	
cout<<s.getLPSLength(b);
	
	
	
}
