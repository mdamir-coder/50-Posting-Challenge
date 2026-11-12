class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<j){
            ans=max(ans,min(height[j], height[i])*(j-i));
            height[i]<height[j]? i++:j--;
        }
        return ans;

        /* int n=h.size(),i=0,j=n-1,ans=0;
        while(i<j){
            ans=max(ans,min(h[j],h[i])*(j-i));
            h[i]<h[j]?i++:j--;
        }
        return ans;*/
    }
};