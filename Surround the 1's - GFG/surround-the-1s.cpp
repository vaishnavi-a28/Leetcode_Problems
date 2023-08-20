//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int solve(vector<vector<int>>& matrix,int x,int y){
        int n=matrix.size();
        int m=matrix[0].size();
        
        int res=0;
        for(int i=-1;i<2;i++){
            for(int j=-1;j<2;j++){
                int x1=x+i;
                int y1=y+j;
                if(x1<0 || y1<0 || x1>=n || y1>=m)
                 continue;
                if(matrix[x1][y1]==0)
                 res++;
            }
        }
        return (res>0 && res%2==0);
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    if(solve(matrix,i,j))
                     res++;
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends