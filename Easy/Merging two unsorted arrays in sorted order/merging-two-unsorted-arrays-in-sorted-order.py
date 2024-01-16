class Solution:
    def sortedMerge(self, a, b, c, n, m):
        # Your code goes here
        a.extend(b);
        for i in range(len(a)):
            c[i]=a[i]
        c.sort()
        
        
#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    t=int(input())
    for _ in range(0,t):
        l=list(map(int,input().split()))
        n=l[0]
        m=l[1]
        a=list(map(int,input().split()))
        b = list(map(int, input().split()))
        c=[0]*(n+m)
        ob = Solution()
        ob.sortedMerge(a,b,c,n,m)
        for i in c:
            print(i,end=" ")
        print()
# } Driver Code Ends