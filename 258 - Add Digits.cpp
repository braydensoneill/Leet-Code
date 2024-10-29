class Solution {
public:
    int addDigits(int num) {
        if (num == 0) 
            return 0;  // Handle the case for 0 directly

        int currentNum = num;
        bool isOneDigit = false;

        while (!isOneDigit) {
            if (currentNum < 10) {
                isOneDigit = true;
                break;  // Exit the loop if currentNum is already a single digit
            }

            int tempSum = 0;  // Initialize a temporary sum for the current iteration
            while (currentNum > 0) {
                tempSum += currentNum % 10;  // Add the last digit to tempSum
                currentNum /= 10;  // Remove the last digit
            }

            currentNum = tempSum;  // Set currentNum to the sum of digits for the next iteration
        }

        return currentNum;  // Return the final single-digit result
    }
};
