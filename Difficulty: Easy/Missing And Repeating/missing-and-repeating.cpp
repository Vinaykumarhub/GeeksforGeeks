//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>map;
        vector<int>ans;
        int i,j;
        for(i=0;i<n;i++){
            if(map.find(arr[i])==map.end()){
            map[arr[i]]=1;
            }
            else{
                map[arr[i]]++;
            }
        }
        for(i=0;i<n;i++){
          if(map[arr[i]]>=2){
              ans.push_back(arr[i]);
              break;
          }
        }
        for(i=1;i<=n;i++){
           if(map.find(i)==map.end()){
               ans.push_back(i);
               break;
           } 
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends