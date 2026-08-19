class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long ans=0;
        while(start<=end){
            long mid = start + (end-start)/2;
            if(mid*mid>x){
                end=mid-1;
            }
            else{
                ans=max(ans,mid);
                start=mid+1;
            }
        } return ans;
    }
};