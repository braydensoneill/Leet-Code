class Solution {
public:
    vector<char> romanLetters = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    vector<int> romanValues = {1, 5, 10, 50, 100, 500, 1000};

    int romanToInt(string s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            // Get the value of the current Roman numeral
            int currentVal = getValue(s[i]);
            
            // Check if the next Roman numeral exists and is larger than the current
            if (i + 1 < s.length() && getValue(s[i + 1]) > currentVal) {
                // Apply the subtraction rule
                num -= currentVal;
            } else {
                // Otherwise, add the value normally
                num += currentVal;
            }
        }
        return num;
    }

    int getValue(char c) {
        for (int j = 0; j < romanLetters.size(); j++) {
            if (c == romanLetters[j]) {
                return romanValues[j];
            }
        }
        return 0; // In case of an invalid character, though we assume input is valid
    }
};