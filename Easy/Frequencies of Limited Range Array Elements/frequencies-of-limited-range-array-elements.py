
class Solution:
    #Function to count the frequency of all elements from 1 to N in the array.
    def frequencyCount(self, arr, N, P):
        # code here
        d={}
        a=[]
        for i in arr:
            if i not in d:
                d[i]=1
            else:
                d[i]=d[i]+1
        # print(P)
        i=0;
        for j in range (1,(P+1and N+1)):
            if j not in d:
                arr[j-1]=0
            else:
                arr[j-1]=d[j]
        # print(d)
        if(P<N):
            for i in range(P,P+abs(P-N)):
                arr[i]=0
        # arr=[]
        # print(a)
        # arr = a
        # print(arr)




#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
if __name__=="__main__":
	T=int(input())
	while(T>0):
		N=int(input())
		arr=[int(x) for x in input().strip().split()]
		P=int(input())
		ob=Solution()
		ob.frequencyCount(arr, N, P)
		for i in arr:
			print(i, end=" ")
		print()
		T-=1



# } Driver Code Ends