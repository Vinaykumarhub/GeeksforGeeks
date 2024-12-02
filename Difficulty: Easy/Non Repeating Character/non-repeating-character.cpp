//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>map;
        int i,n=s.size();
        for(i=0;i<n;i++){
            map[s[i]]++;
        }
        for(i=0;i<n;i++){
          if(map[s[i]]==1){
              return s[i];
          }
        }
        return '$';
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends