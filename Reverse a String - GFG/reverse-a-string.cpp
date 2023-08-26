//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        stack<char> st;
        int i=0;
        while(str[i]!='\0'){
            char c=str[i];
            st.push(c);
            i++;
        }
        str="";
        int size=st.size();
        for(int i=0;i<size;i++){
            str+=st.top();
            st.pop();
        }
        return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends