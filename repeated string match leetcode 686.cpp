#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/* leetcode 
 686. Repeated String Match

Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b?????? to be a substring of a after repeating it, return -1.

Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

 

Example 1:

Input: a = "abcd", b = "cdabcdab"
Output: 3
Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.
Example 2:

Input: a = "a", b = "aa"
Output: 2

steps to solve it 
1.a ko b ke size tk repeat krna jb tk same size tk ho naa jaye 
2. check substring if exist then return repeaation 
3. check substring - lps + kmp pattern matching ;
 

*/

class Solution {
public:
void lps(
vector<int>& lpsArr, string s) {
        int pre = 0;
        int suff = 1;

        while (suff < s.size()) {
            if (s[pre] == s[suff]) {
                lpsArr[suff] = pre + 1;
                pre++;
                suff++;
            } else {
                if (pre == 0) {
                    lpsArr[suff] = 0;
                    suff++;
                } else {
                    pre = lpsArr[pre - 1];
                }
            }
        }
    }

    int KMP_MATCH(string haystack, string needle) {
        vector<int> lpsArr(needle.size(), 0);   // renamed
        lps(lpsArr, needle);                   // fixed call

        int first = 0, second = 0;

        while (second < needle.size() && first < haystack.size()) {
            if (needle[second] == haystack[first]) {
                second++;
                first++;
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lpsArr[second - 1];
                }
            }
        }

        if (second == needle.size()) {
            return 1;   
        }
        return 0;
    }

    int repeatedStringMatch(string a, string b) {
        if(a==b){
            return 1;
        }
        int repeat =1;
        string temp =a;
        while(temp.size()<b.size()){
            temp+=a;
            repeat ++;
        }
        // KMP PAttern Search 

        if(KMP_MATCH(temp,b)==1){
            return repeat;

        }

        // temp+a, kmp search 
         if(KMP_MATCH(temp+a,b)==1){
            return repeat+1;

        }
        return -1;

    }
};

int main (){
	Solution s ;
	string a= "abc";
	string b = "bcabcabc";
	
	int result = s.repeatedStringMatch(a,b);
	cout<<result ;
	
	
	
	return 0;
}
