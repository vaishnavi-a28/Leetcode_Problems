//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void f(int ind,string &s,string temp,int n,vector<int>&vis,vector<string>&ans){
        if(ind==n)ans.push_back(temp);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vis[i]=1;
                temp+=s[i];
                f(ind+1,s,temp,n,vis,ans);
                temp.pop_back();
                vis[i]=0;
            }
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>ans;
        int n=S.size();
        vector<int>vis(n,0);
        string temp="";
        f(0,S,temp,n,vis,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends