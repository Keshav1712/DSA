#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
leetcode -3 
longest substring 
sliding window 
time complexity - O(n)
space complexity O(1)
working ---
1.=two var first and second both on starting point with init value zero 
2. second var mark 1 for each element until duplicate found 
3.if duplicate exist then shrink value using first var using inner loop 
4. at then end calc len = max(len,second-first +1)


*/
int lengthOfLongestSubstring(string s) {
    vector<bool> count(256, 0);

    int first = 0;
    int second = 0;
    int len = 0;

    while (second < s.size()) {

        while (count[s[second]]) {
            count[s[first]] = 0;
            first++;
        }

        count[s[second]] = 1;
        len = max(len, second - first + 1);

        second++;
    }

    return len;
}

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;  

    int result = lengthOfLongestSubstring(s);

    cout << "Length of longest substring without repeating characters: " 
         << result << endl;

    return 0;
}
