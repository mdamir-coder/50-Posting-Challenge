class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size(),i=0,j=n-1,ans=0;
        while(i<j){
            ans=max(ans,min(h[j],h[i])*(j-i));
            h[i]<h[j]?i++:j--;
        }
        return ans;
         
    }
};