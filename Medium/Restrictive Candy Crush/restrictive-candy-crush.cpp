//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k==1)
        {
            return "";
        }
    int i,j,c,hj;
    i=j=c=hj=0;
    while(j!=s.size()){
        if(s[i]==s[j]){
            c+=1;
            j+=1;
        }
        else if(c>=k){
            hj=1;
            s.erase(i,k);
            j=i;
            c=0;
        }
        else{
            i+=1;
            j=i;
            c=0;
        }
    }
    if(c>=k)
    {
        hj=1;
        s.erase(j-k,k);
    }
    if(hj==0) return s;
    else return Reduced_String(k,s);

}


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends