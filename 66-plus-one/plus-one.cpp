class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(); int checkzero=0; int checktwo=0;
        if(digits[0]==9) checkzero=1;
        for(int i=n-1; i>=0; i--){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]+=1;
                checktwo=1;
                break;
            }
        }
        if(checkzero==1 && checktwo!=1){
            digits.insert(digits.begin(),1);
        }
        return digits;

    }
};