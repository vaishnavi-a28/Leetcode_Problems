class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==0)
            return ans;
         ans.push_back(vector<int> ());
         ans[0].push_back(1);
        if(numRows==1)
            return ans;
        ans.push_back(vector<int> ());
        ans[1].push_back(1);
        ans[1].push_back(1);
        for(int i=2;i<numRows;i++){
            ans.push_back(vector<int> ());
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    ans[i].push_back(1);
                else{
                    int first= ans[i-1][j];
                    int second= ans[i-1][j-1];
                    ans[i].push_back(first+second);
                }      
            }
        }
        return ans;
    }
};