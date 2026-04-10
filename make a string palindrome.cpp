#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;
/*
GFG Question Min Chars to Add for Palindrome
Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

Note: A palindrome string is a sequence of characters that reads the same forward and backward.

Examples:

Input: s = "abc"
Output: 2
Explanation: Add 'b' and 'c' at front of the above string to make it palindrome: "cbabc"
Input: s = "aacecaaaa"
Output: 2
Explanation: Add 2 a's at front of the above string to make it palindrome: "aaaacecaaaa"



solution -
1. take a string given 
2. reverse it 
3. add it with a seperator string + $+ reverse 
4. then find lps 
5. return size - lps [n-1]

time cpmplexity - O(n)
space somplexity - O(n)



*/
class Solution {
  public:
    int minChar(string &s) {
        // code here
        // reverse the string and add it into end 
        
            string rev =s ;
            reverse(rev.begin(),rev.end());
            int size =s.size();
            s +='$';
            s+=rev;
            int n = s.size();
            // lps 
            vector<int> lps(n,0);
            int pre =0;
            int suff=1;
            while(suff<n){
                // matched 
                if(s[pre]==s[suff]){
                    lps[suff]=pre+1;
                pre++;
                suff++;
                    
                }
                 // not matchced 
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
            
            // answer 
            return size - lps[n-1]; 
    }
};

int main (){
   Solution s ;
   string st="abc";
   int n = s.minChar(st);
   cout<<n<<endl;
	
	
	
	
	return 0;
}

