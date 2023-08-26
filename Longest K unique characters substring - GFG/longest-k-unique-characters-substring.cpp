//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int freq[26] = {0};
        int n = s.length();

        int cnt = 0, mx = -1;
        int i = 0, j = 0;
        while(j < n){
            char ch = s[j++];
            if(freq[ch - 'a'] == 0){
                cnt++;
            }
            freq[ch - 'a']++;
            
            if(cnt == k){
                int len = j - i;
                mx = max(mx,len);
            }
            
            while(cnt > k && i < j){
                char ch = s[i++];
                freq[ch - 'a']--;
                if(freq[ch - 'a'] == 0) cnt--;
            }
        }
        return (mx);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends