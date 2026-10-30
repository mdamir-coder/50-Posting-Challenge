class Solution {
public:
    vector<int>generaterows(int rows){
        vector<int>ansrow;
        long long int ans=1;
        ansrow.push_back(ans);
        for(int i=1; i<rows;i++){
            ans=ans*(rows-i);
            ans=ans/i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>>generate(int numrows){
        vector<vector<int>> ans;
        for(int i=1; i<=numrows; i++){
            ans.push_back(generaterows(i));
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans= generate(rowIndex+1);
        return ans[rowIndex];
    }
};