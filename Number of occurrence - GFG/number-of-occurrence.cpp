//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstocc(int arr[],int x,int n){
	    int s=0;
	    int e=n;
	    int ans=-1;
	    int mid=s+(e-s)/2;
	    while(s<=e){
	        if(arr[mid]==x){
	         ans=mid;
	         e=mid-1;
	        }
	        else if(arr[mid]<x)
	         s=mid+1;
	        else
	         e=mid-1;
	        mid=s+(e-s)/2;
	    }
	    return ans;
	}
	int lastocc(int arr[],int x,int n){
	    int s=0;
	    int e=n;
	    int ans=-1;
	    int mid=s+(e-s)/2;
	    while(s<=e){
	        if(arr[mid]==x){
	         ans=mid;
	         s=mid+1;
	        }
	        else if(arr[mid]<x)
	         s=mid+1;
	        else
	         e=mid-1;
	        mid=s+(e-s)/2;
	    }
	    return ans;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int f=firstocc(arr,x,n);
	    int l=lastocc(arr,x,n);
	    if(l==-1 && f==-1)
	     return 0;
	    else
	     return l-f+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends