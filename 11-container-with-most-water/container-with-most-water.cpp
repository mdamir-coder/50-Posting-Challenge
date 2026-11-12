class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
       long long int ans=0;
        while(i<j){
           long long int x=(min(height[i],height[j]))*(j-i);
           if(ans<x)ans=x;
           height[i]<height[j]? i++ :j--;
        }
        return ans;
    }
};