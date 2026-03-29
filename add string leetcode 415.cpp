#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
LEETCODE - 415 
add string 

*/
class Solution {
public:
    string add(string num1, string num2) {
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;
        string ans;
        int carry = 0;
        int sum;

        while (index2 >= 0) {
            sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum / 10;
            char c = '0' + (sum % 10);
            ans += c;
            index2--;
            index1--;
        }

        while (index1 >= 0) {
            sum = (num1[index1] - '0') + carry;
            carry = sum / 10;
            char c = '0' + (sum % 10);
            ans += c;
            index1--;
        }

        if (carry) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {
        if (num1.size() > num2.size()) {
            return add(num1, num2);
        } else {
            return add(num2, num1);
        }
    }
};

int main() {
    Solution obj;

    string num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    string result = obj.addStrings(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}
