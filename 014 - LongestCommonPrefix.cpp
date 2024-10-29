class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle edge case of empty list
        
        string commonPrefix = strs[0]; // Assume the first string is the common prefix

        // Loop through each word in the array starting from the second word
        for (int i = 1; i < strs.size(); i++) {
            string currentWord = strs[i];
            string tempPrefix = "";
            
            // Compare the current word with the current common prefix
            for (int k = 0; k < min(commonPrefix.length(), currentWord.length()); k++) {
                if (commonPrefix[k] == currentWord[k]) {
                    tempPrefix += commonPrefix[k]; // Add matching characters to tempPrefix
                } else {
                    break; // Stop comparison if characters don't match
                }
            }
            
            commonPrefix = tempPrefix; // Update commonPrefix with the result from this comparison

            if (commonPrefix.empty()) {
                break; // If at any point the commonPrefix becomes empty, exit early
            }
        }

        return commonPrefix;
    }
};
