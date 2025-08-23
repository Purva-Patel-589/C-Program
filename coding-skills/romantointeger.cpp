#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int value(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int total = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (i < n - 1 && value(s[i]) < value(s[i + 1])) {
                total -= value(s[i]);
            } else {
                total += value(s[i]);
            }
        }
        return total;
    }

    void explain(string s) {
        cout << "Input: s = \"" << s << "\"" << endl;
        int result = romanToInt(s);
        cout << "Output: " << result << endl;
        cout << "Explanation: ";
        for (int i = 0; i < s.size(); i++) {
            int val = value(s[i]);
            if (i < (int)s.size() - 1 && val < value(s[i + 1])) {
                cout << s[i] << s[i + 1] << " = " << (value(s[i + 1]) - val);
                i++;
            } else {
                cout << s[i] << " = " << val;
            }
            if (i < (int)s.size() - 1) cout << ", ";
        }
        cout << "." << endl << endl;
    }
};

int main() {
    Solution sol;

    sol.explain("III");
    sol.explain("LVIII");
    sol.explain("MCMXCIV");

    return 0;
}