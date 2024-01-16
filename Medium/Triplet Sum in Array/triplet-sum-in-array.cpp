//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int t)
    {
        //Your Code Here
        int i,j,k,x,y;
        sort(a,a+n);
        for (i=0;i<n;i++) {
            j=0;
            k=n-1;
            x = a[i];
            while (j<=k) {
                
                if (j==i and k==i) {
                    if (j==i) j++;
                    else k--;
                }
                y =a[j]+a[k];
                if (y+x == t and a[i]!=a[j] and a[j]!=a[k] and a[i]!=a[k]) return 1;//{ cout << a[i] << " " << a[j] << ' '<< a[k]; return 1 ;} 
                else {
                    if (t<x+y) {
                        k--;
                    }
                    else {
                        j++;
                    }
                }
            }
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends