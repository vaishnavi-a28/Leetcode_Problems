//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool check(int c,vector<vector<int>>& M,int n){
        for(int i=0;i<n;i++){
            if(c!=i){
             if(M[c][i]!=0 || M[i][c]!=1){
                return false;
             }
            }
        }
        return true;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(M[a][b]==1 && M[b][a]==0){
                s.push(b);
            }
            if(M[b][a]==1 && M[a][b]==0){
                s.push(a);
            }
        }
        if(s.empty())
         return -1;
        else{
            int c=s.top();
            if(check(c,M,n))
             return c;
            else 
             return -1;
        }
        return -1;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends