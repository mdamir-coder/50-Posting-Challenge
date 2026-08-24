#include <algorithm>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longseq = 0;
        for (int num : numset) {
            if (numset.find(num - 1) == numset.end()) {
                int currentnum = num;
                int currentseq = 1;
                while (numset.find(currentnum + 1) != numset.end()) {
                    currentnum += 1;
                    currentseq += 1;
                }
                longseq = max(currentseq, longseq);
            }
        }
        return longseq;
    }
};
