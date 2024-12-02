//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& arr) {
    // Your code goes here
    int n=arr.size();
    int m=arr[0].size();
    int i,j;
    int nums[n][m];
    for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
           nums[j][i]=arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr[i][j]=nums[i][m-j-1];
        }
    }
}




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n);
        for (int i = 0; i < n; i++) {
            matrix[i].resize(n);
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends