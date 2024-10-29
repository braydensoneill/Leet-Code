class Solution {
public:
    bool isPalindrome(int x) {
        string numString = to_string(x);
        
        for (int i = 0; i < numString.length() / 2; i++) {
            if (numString.at(i) != numString.at(numString.length() - i - 1))
                return false;
        }

        return true;
    }
};