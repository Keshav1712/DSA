#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Your efficient Counting Sort logic
string sortString(string s) {
    vector<int> alpha(26, 0);

    // Count frequency
    for (int i = 0; i < s.size(); i++) {
        int index = s[i] - 'a';
        alpha[index]++;
    }

    string ans = "";

    // Build sorted string
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        while (alpha[i]) {
            ans += c;
            alpha[i]--;
        }
    }

    return ans;
}

int main() {
    // 1. Define your test strings
    string test1 = "helloworld";
    string test2 = "keshav";
    string test3 = "no one";

    // 2. Run the function and print the outputs
    cout << "Original: " << test1 << "\nSorted:   " << sortString(test1) << "\n\n";
    cout << "Original: " << test2 << "\nSorted:   " << sortString(test2) << "\n\n";
    cout << "Original: " << test3 << "\nSorted:   " << sortString(test3) << "\n";

    return 0; // Indicates successful execution
}
