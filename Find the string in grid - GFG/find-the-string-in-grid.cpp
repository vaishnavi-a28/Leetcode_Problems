//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	    // Code here
	bool is_valid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
    }
 
    bool search_direction(vector<vector<char>>& grid, const string& word, int x, int y, int dx, int dy) {
        int n = grid.size();
        int m = grid[0].size();
    
        for (char c : word) {
            if (!is_valid(x, y, n, m) || grid[x][y] != c) {
                return false;
            }
            x += dx;
            y += dy;
        }
        return true;
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	      int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
        set<vector<int>> result;
 
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < m; ++j) 
            {
                for (const vector<int>& direction : directions) 
                {
                    int dx = direction[0];
                    int dy = direction[1];
                    if (search_direction(grid, word, i, j, dx, dy)) 
                    {
                        result.insert({i, j});
                    }
                }
            }
        }
 
    return vector<vector<int>>(result.begin(), result.end());
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends