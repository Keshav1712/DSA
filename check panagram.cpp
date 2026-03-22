#include <iostream>
#include <string>
#include <vector>
/* Leetcode 1832 check panagram - where we have to check is the character of a sentence contains all letter or not 
*/
using namespace std;

class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool> alpha(26, 0);
        for(int i = 0; i < s.size(); i++){
            alpha[s[i] - 'a'] = 1;
        }
        for(int i = 0; i < 26; i++){
            if(alpha[i] == 0){
                return 0;
            }
        }
        return 1;
    }
};

int main() {
    // 1. Create an instance of the Solution class
    Solution solution;

    // 2. Define test cases
    string test1 = "thequickbrownfoxjumpsoverthelazydog"; // Should return true (1)
    string test2 = "leetcode";                            // Should return false (0)

    // 3. Run the method and print the results
    cout << "Checking: \"" << test1 << "\"" << endl;
    if (solution.checkIfPangram(test1)) {
        cout << "Result: It is a pangram (true)" << endl;
    } else {
        cout << "Result: It is NOT a pangram (false)" << endl;
    }

    cout << "\nChecking: \"" << test2 << "\"" << endl;
    if (solution.checkIfPangram(test2)) {
        cout << "Result: It is a pangram (true)" << endl;
    } else {
        cout << "Result: It is NOT a pangram (false)" << endl;
    }

    return 0;
}
