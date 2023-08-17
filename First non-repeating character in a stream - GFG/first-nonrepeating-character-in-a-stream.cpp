//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    if(s.length()==0)
		     return "#";
		    if(s.length()==1)
		     return s;
		     
		    map<char,int> mp;
		    
		    string res="";
		    
		    queue<int> q;
		    
		    for(int i=0;i<s.length();i++){
		        mp[s[i]]++;
		        if(mp[s[i]]==1){
		            q.push(s[i]);
		        }
		        while(q.empty()==false && mp[q.front()]>1){
		            q.pop();
		        }
		        if(q.empty())
		         res+="#";
		        else
		         res+=q.front();
		    }
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends