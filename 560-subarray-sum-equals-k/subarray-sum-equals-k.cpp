class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> presum;
        presum[0]=1;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int remove=sum-k;
            count+=presum[remove];
            presum[sum]+=1;

        }
        return count;
    }
};