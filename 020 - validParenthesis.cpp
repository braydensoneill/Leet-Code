class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;

        for (char c : s) {
            // If the character is an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } c

            // If the character is a closing bracket, check if it matches the top of the stack
            else if (c == ')' || c == '}' || c == ']') {
                if (stack.empty()) 
                    return false;  // No matching opening bracket
                    
                char top = stack.top();
                stack.pop();

                // Check if the current closing bracket matches the last opening bracket
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // If the stack is empty, all brackets were matched correctly
        return stack.empty();
    }
};