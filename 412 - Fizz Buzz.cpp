class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> nums = {};

        for (int i = 1; i < n + 1; i++) {
            if ((i % 3 == 0) && (i % 5 != 0))
                nums.push_back("Fizz");

            else if ((i % 3 != 0) && (i % 5 == 0))
                nums.push_back("Buzz");

            else if ((i % 3 == 0) && (i % 5 == 0))
                nums.push_back("FizzBuzz");

            else
                nums.push_back(to_string(i));
        }

        return nums;
    }
};