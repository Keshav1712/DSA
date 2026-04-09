
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void lps(vector<int>& lpsArr, string s) {
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

    int strStr(string haystack, string needle) {
        vector<int> lpsArr(needle.size(), 0);
        lps(lpsArr, needle);

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
            return first - second;
        }
        return -1;
    }
};

int main() {
    Solution obj;

    string haystack, needle;
    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    int result = obj.strStr(haystack, needle);

    cout << "Result: " << result << endl;

    return 0;
}
