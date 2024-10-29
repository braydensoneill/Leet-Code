class Solution {
public:
    bool isPalindrome(string s) {
        string letters = "";

        // Filter out non-alphanumeric characters and convert to lowercase
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s.at(i))) {
                letters += static_cast<char>(tolower(s.at(i)));
            }
        }

        // Check if the string is a palindrome
        for (int i = 0; i < letters.size() / 2; i++) {
            if (letters.at(i) != letters.at(letters.size() - 1 - i)) {
                return false;
            }
        }

        return true;
    }
};
