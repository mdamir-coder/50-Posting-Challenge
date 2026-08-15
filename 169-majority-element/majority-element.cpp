class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[0];
        for(int i=0; i<(n/2)+1; i++){
            int count =0;
            int ele = nums[i];
            for(int j=0; j<n; j++){
                if(nums[j]==ele){
                    count+=1;
                }
                if(count>n/2){
                    return ele;
                    break;
                }
            }
        }
        return temp;
    }
};