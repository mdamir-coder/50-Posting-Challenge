class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        int k=0;
        while(start<end){
            if(nums[start]==val && nums[end]!=val){
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            else if(nums[end]==val && nums[start]==val){
                end--;
            }
            else{
                start++;
            }
        }
        for(int m=0; m<n; m++){
            if(nums[m]!=val){
                k++;
            }
            else{
                return k;
            }
        } return k;
    }
};