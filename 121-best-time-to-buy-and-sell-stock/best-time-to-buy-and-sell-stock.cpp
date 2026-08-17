class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); int profit=0; int mini=prices[0];
        /*if(n==2){
            if(prices[1]>prices[0]){
                return prices[1]-prices[0];
            }
            else{
                return 0;
            }
        }
        else if(n==1){
            return 0;
        }*/
        for(int i=1; i<n; i++){
            int cost = prices[i] - mini;
            profit=max(cost, profit);
            mini=min(mini, prices[i]);
        } return profit;
    }
};