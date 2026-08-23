#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        // Step 1: Insert all numbers into an unordered set
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int longestSequence = 0;

        // Step 2: Iterate through each unique number
        for (int num : numSet) {
            // Check if 'num' is the starting point of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentSequence = 1;

                // Expand the sequence forward
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentSequence += 1;
                }

                // Update the maximum sequence length found
                longestSequence = std::max(longestSequence, currentSequence);
            }
        }

        return longestSequence;
    }
};
