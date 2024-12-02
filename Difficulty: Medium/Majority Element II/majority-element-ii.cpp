//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        unordered_map<int,int>map;
        int n=arr.size();
        int i,j;
        for(i=0;i<n;i++){
            map[arr[i]]++;
        }
        vector<int>nums;
        for(auto k:map){
            if(k.second>n/3){
                nums.push_back(k.first);
            }
        }
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return {};
        }
        return nums;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends