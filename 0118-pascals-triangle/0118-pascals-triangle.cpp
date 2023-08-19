class Solution {
public:
    
    vector<int> nthrow(int row){
        vector<int> ans;
        int res=1;
        ans.push_back(res);
        for(int i=1;i<row;i++){
            res=res*(row-i);
            res=res/i;
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(nthrow(i));
        }
        return ans;
    }
};