#include <algorithm>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1;
        if(n==0) return;
        int index=0;
        int mini = nums[index];
        int miniindex=0;
        bool sortcheck = false;
        if (nums[n - 1] < nums[n]) {
            swap(nums[n - 1], nums[n]);
            return;
        } else {
            for (int i = n; i > 0; i--) {
                if (nums[i] <= nums[i - 1]) {
                    sortcheck = true;
                } else {
                    sortcheck = false;
                    index = i - 1;
                    break;
                }
            }
        if (sortcheck==true) {
            int start = 0;
            int end = n;
            while (start < end) {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
        } else {
            for(int i=n; i>index; i--){
                if(nums[i]>nums[index]){
                    mini=nums[i];
                    miniindex=i;
                    break;
                }
            }
            
            cout<<nums[index];
            cout<<nums[miniindex];
            swap(nums[miniindex], nums[index] );
            reverse(nums.begin()+index+1, nums.begin()+n+1);

            }
        } return;
    }
};