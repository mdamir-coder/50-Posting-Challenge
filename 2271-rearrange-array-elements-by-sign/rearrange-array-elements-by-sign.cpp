class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> newvec(nums);
        int pindex = 0;
        int negindex = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                newvec[pindex] = nums[i];
                if (pindex < n) {
                    pindex += 2;
                } else {
                    break;
                }
            } else {
                if (nums[i] < 0) {
                    newvec[negindex] = nums[i];
                    if (negindex < n) {
                        negindex += 2;
                    } else {
                        break;
                    }
                }
            }
        }
        return newvec;
    }
};