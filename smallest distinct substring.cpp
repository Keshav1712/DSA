#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
smallest distinct substring gfg 
using sliding window 


*/
class Solution {
public:
    int findSubString(string& str) {
        
        vector<int> count(256, 0);
        int first = 0;
        int second = 0;
        int len = str.size();
        int diff = 0;

        // calc all unique character 
        while (second < str.size()) {
            if (count[str[second]] == 0) {
                diff++;
            }
            count[str[second]]++;
            second++;
        }

        // reset count array
        for (int i = 0; i < 256; i++) {
            count[i] = 0;
        }

        first = 0;
        second = 0;

        while (second < str.size()) {

            // expand window
            while (diff && second < str.size()) {
                if (count[str[second]] == 0) {
                    diff--;
                }
                count[str[second]]++;
                second++;
            }

            // shrink window
            while (diff == 0) {
                len = min(len, second - first);

                count[str[first]]--;
                if (count[str[first]] == 0) {
                    diff++;
                }
                first++;
            }
        }

        return len;
    }
};

int main() {
    string str;
    cin >> str;

    Solution obj;
    cout << obj.findSubString(str) << endl;

    return 0;
}
