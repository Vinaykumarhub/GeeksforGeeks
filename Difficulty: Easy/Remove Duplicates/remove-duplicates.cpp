//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string s) {
        // Your code goes here
        unordered_map<char,int>map;
        int i,j;
        int n=s.size();
        string str="";
        for(i=0;i<n;i++){
         if(map.find(s[i])==map.end()){
            map[s[i]]=i;
            str+=s[i];
         }
        }
        return str;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends