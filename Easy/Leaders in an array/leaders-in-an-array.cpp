//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        // stack<int> st;
        // vector <int> v;
        // st.emplace(a[n-2]);
        // int i;
        // for (i=n-3;0<=i;i--) {
        //     if (st.top()<a[i] and a[n-1]<st.top()) {
        //         st.emplace(a[i]);
        //     }
        // }
        // while (st.empty()!=true) {
        //     if(st.top()>a[n-1]){
        //     v.emplace_back(st.top()) ;
        //     st.pop();
        //     }
        //     else {st.pop();}
        // }
        // v.emplace_back(a[n-1]);
        // return v;
        stack<int>st;
        st.push(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(st.top() <= a[i]) st.push(a[i]);
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends