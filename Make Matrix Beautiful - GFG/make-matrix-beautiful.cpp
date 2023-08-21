//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        vector<int> row(n),col(n);
       for(int i=0;i<n;i++){
           int res=0,sum=0;
           for(int j=0;j<n;j++){
               sum+=matrix[i][j];
               res+=matrix[j][i];
           }
           row[i]=sum;
           col[i]=res;
       }
        
          int a=INT_MIN,b=INT_MIN;
          for(int i=0;i<n;i++){
              a=max(a,row[i]);
              b=max(b,col[i]);
          }
          
          int m=max(a,b);
          int ans=0;
          for(int i=0;i<n;i++){
              ans+=abs(m-row[i]);
          }
          return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends